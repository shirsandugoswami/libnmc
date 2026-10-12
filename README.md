# libnmc

**A lightweight numerical methods library written in C.**

`libnmc` is a personal scientific computing project that implements fundamental numerical methods in C. The goal is to provide reusable implementations of common numerical algorithms through a simple library interface.

The project is being developed as part of my exploration of numerical analysis, scientific programming, and computational physics.

## Features

### Root Finding

* Bisection method
* Newton's method

### Numerical Integration

* Trapezoidal rule
* Simpson's rule
* Monte Carlo integration

### Ordinary Differential Equations

* Euler's method
* Fourth-order Runge–Kutta method (RK4)

## Project Structure

* `include/` — Public library header
* `src/` — Numerical method implementations
* `examples/` — Example programs demonstrating library usage

## Requirements

* A C compiler, such as GCC
* GNU Make

## Building

Clone the repository:

```bash
git clone https://github.com/shirsandugoswami/libnmc.git
cd libnmc
```

Build the library:

```bash
make
```

The exact build commands and available targets depend on the project's Makefile.

## Usage

Include the public header in your C program:

```c
#include "libnmc.h"
```

For example, an ODE solver can be used to approximate the solution of a first-order differential equation:

```c
double f(double x, double y)
{
    return x + y;
}
```

The function can then be passed to `nmc_rk4()` with the initial conditions, final integration point, and number of steps.

See the `examples/` directory for complete programs.

## Current Status

The library is under development. The current scope focuses on implementing and verifying fundamental numerical methods.

## Author

Shirsandu Goswami



