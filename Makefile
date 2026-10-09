CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
LDFLAGS = -lm

LIB = libnmc.a

SRC = src/root.c src/integration.c src/ode.c
OBJ = $(SRC:.c=.o)

EXAMPLES = bisection trapezoidal simpsons monte_carlo newton_rapson euler rk4

.PHONY: all clean examples

all: $(LIB) examples

$(LIB): $(OBJ)
	ar rcs $@ $^

src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

examples: $(EXAMPLES)

bisection: examples/bisection.c $(LIB)
	$(CC) $(CFLAGS) $< -L. -lnmc $(LDFLAGS) -o $@

trapezoidal: examples/trapezoidal.c $(LIB)
	$(CC) $(CFLAGS) $< -L. -lnmc $(LDFLAGS) -o $@

simpsons:  examples/simpsons.c $(LIB)
	$(CC) $(CFLAGS) $< -L. -lnmc $(LDFLAGS) -o $@

monte_carlo: examples/monte_carlo.c $(LIB)
	$(CC) $(CFLAGS) $< -L. -lnmc $(LDFLAGS) -o $@

newton_rapson: examples/newton_rapson.c $(LIB)
	$(CC) $(CFLAGS) $< -L. -lnmc $(LDFLAGS) -o $@

euler: examples/euler.c $(LIB)
	$(CC) $(CFLAGS) $< -L. -lnmc $(LDFLAGS) -o $@

rk4: examples/rk4.c $(LIB)
	$(CC) $(CFLAGS) $< -L. -lnmc $(LDFLAGS) -o $@
	
clean:
	rm -f $(OBJ) $(LIB) $(EXAMPLES)