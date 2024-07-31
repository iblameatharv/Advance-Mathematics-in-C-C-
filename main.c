#include "advmath.h"

// Basic Arithmetic Functions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero\n");
        exit(EXIT_FAILURE);
    }
    return a / b;
}

// Power and Root Functions
double power(double base, double exponent) {
    return pow(base, exponent);
}

double square_root(double x) {
    return sqrt(x);
}

double cube_root(double x) {
    return cbrt(x);
}

double square(double x) {
    return x * x;
}

double cube(double x) {
    return x * x * x;
}

// Trigonometric Functions
double sine(double angle) {
    return sin(angle);
}

double cosine(double angle) {
    return cos(angle);
}

double tangent(double angle) {
    return tan(angle);
}

// Inverse Trigonometric Functions
double arcsine(double x) {
    return asin(x);
}

double arccosine(double x) {
    return acos(x);
}

double arctangent(double x) {
    return atan(x);
}

// Exponential and Logarithmic Functions
double exponential(double x) {
    return exp(x);
}

double natural_log(double x) {
    return log(x);
}

double logarithm_base10(double x) {
    return log10(x);
}

// Hyperbolic Functions
double hyperbolic_sine(double x) {
    return sinh(x);
}

double hyperbolic_cosine(double x) {
    return cosh(x);
}

double hyperbolic_tangent(double x) {
    return tanh(x);
}

// Complex Number Functions
Complex complex_add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex complex_subtract(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex complex_multiply(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

Complex complex_divide(Complex a, Complex b) {
    double denominator = b.real * b.real + b.imag * b.imag;
    if (denominator == 0) {
        fprintf(stderr, "Error: Division by zero\n");
        exit(EXIT_FAILURE);
    }
    Complex result;
    result.real = (a.real * b.real + a.imag * b.imag) / denominator;
    result.imag = (a.imag * b.real - a.real * b.imag) / denominator;
    return result;
}

// Matrix Operations
Matrix create_matrix(int rows, int cols) {
    Matrix m;
    m.rows = rows;
    m.cols = cols;
    m.data = (double**)malloc(rows * sizeof(double*));
    for (int i = 0; i < rows; i++) {
        m.data[i] = (double*)malloc(cols * sizeof(double));
    }
    return m;
}

void delete_matrix(Matrix m) {
    for (int i = 0; i < m.rows; i++) {
        free(m.data[i]);
    }
    free(m.data);
}

Matrix add_matrices(Matrix a, Matrix b) {
    if (a.rows != b.rows || a.cols != b.cols) {
        fprintf(stderr, "Error: Matrix dimensions must match for addition\n");
        exit(EXIT_FAILURE);
    }
    Matrix result = create_matrix(a.rows, a.cols);
    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < a.cols; j++) {
            result.data[i][j] = a.data[i][j] + b.data[i][j];
        }
    }
    return result;
}

Matrix subtract_matrices(Matrix a, Matrix b) {
    if (a.rows != b.rows || a.cols != b.cols) {
        fprintf(stderr, "Error: Matrix dimensions must match for subtraction\n");
        exit(EXIT_FAILURE);
    }
    Matrix result = create_matrix(a.rows, a.cols);
    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < a.cols; j++) {
            result.data[i][j] = a.data[i][j] - b.data[i][j];
        }
    }
    return result;
}

Matrix multiply_matrices(Matrix a, Matrix b) {
    if (a.cols != b.rows) {
        fprintf(stderr, "Error: Matrix dimensions must be compatible for multiplication\n");
        exit(EXIT_FAILURE);
    }
    Matrix result = create_matrix(a.rows, b.cols);
    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < b.cols; j++) {
            result.data[i][j] = 0;
            for (int k = 0; k < a.cols; k++) {
                result.data[i][j] += a.data[i][k] * b.data[k][j];
            }
        }
    }
    return result;
}

// Arithmetic Progression
double arithmetic_progression_nth_term(double a, double d, int n) {
    return a + (n - 1) * d;
}

double arithmetic_progression_sum(double a, double d, int n) {
    return n / 2.0 * (2 * a + (n - 1) * d);
}

// Quadratic Equation
bool solve_quadratic(double a, double b, double c, double* root1, double* root2) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        return false;
    }
    else {
        *root1 = (-b + sqrt(discriminant)) / (2 * a);
        *root2 = (-b - sqrt(discriminant)) / (2 * a);
        return true;
    }
}

// Coordinate Geometry
double distance_between_points(double x1, double y1, double x2, double y2) {
    return sqrt(square(x2 - x1) + square(y2 - y1));
}

double midpoint_x(double x1, double x2) {
    return (x1 + x2) / 2;
}

double midpoint_y(double y1, double y2) {
    return (y1 + y2) / 2;
}

// Divisibility Rules
bool is_divisible_by(int num, int divisor) {
    return num % divisor == 0;
}

// Pythagorean Theorem
double pythagorean_theorem(double a, double b) {
    return sqrt(square(a) + square(b));
}

// Factorial
unsigned long long factorial(int n) {
    if (n < 0) {
        fprintf(stderr, "Error: Factorial of a negative number is not defined\n");
        exit(EXIT_FAILURE);
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Fibonacci
unsigned long long fibonacci(int n) {
    if (n < 0) {
        fprintf(stderr, "Error: Fibonacci of a negative number is not defined\n");
        exit(EXIT_FAILURE);
    }
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
