#ifndef ADVMATH_H
#define ADVMATH_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Basic Arithmetic Functions
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

// Power and Root Functions
double power(double base, double exponent);
double square_root(double x);
double cube_root(double x);
double square(double x);
double cube(double x);

// Trigonometric Functions
double sine(double angle);
double cosine(double angle);
double tangent(double angle);

// Inverse Trigonometric Functions
double arcsine(double x);
double arccosine(double x);
double arctangent(double x);

// Exponential and Logarithmic Functions
double exponential(double x);
double natural_log(double x);
double logarithm_base10(double x);

// Hyperbolic Functions
double hyperbolic_sine(double x);
double hyperbolic_cosine(double x);
double hyperbolic_tangent(double x);

// Complex Number Functions
typedef struct {
    double real;
    double imag;
} Complex;

Complex complex_add(Complex a, Complex b);
Complex complex_subtract(Complex a, Complex b);
Complex complex_multiply(Complex a, Complex b);
Complex complex_divide(Complex a, Complex b);

// Matrix Operations
typedef struct {
    int rows;
    int cols;
    double** data;
} Matrix;

Matrix create_matrix(int rows, int cols);
void delete_matrix(Matrix m);
Matrix add_matrices(Matrix a, Matrix b);
Matrix subtract_matrices(Matrix a, Matrix b);
Matrix multiply_matrices(Matrix a, Matrix b);

// Arithmetic Progression
double arithmetic_progression_nth_term(double a, double d, int n);
double arithmetic_progression_sum(double a, double d, int n);

// Quadratic Equation
bool solve_quadratic(double a, double b, double c, double* root1, double* root2);

// Coordinate Geometry
double distance_between_points(double x1, double y1, double x2, double y2);
double midpoint_x(double x1, double x2);
double midpoint_y(double y1, double y2);

// Divisibility Rules
bool is_divisible_by(int num, int divisor);

// Pythagorean Theorem
double pythagorean_theorem(double a, double b);

// Factorial
unsigned long long factorial(int n);

// Fibonacci
unsigned long long fibonacci(int n);

#endif // ADVMATH_H
