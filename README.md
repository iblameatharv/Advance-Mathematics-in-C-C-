Advanced Math Library
Welcome to the Advanced Math Library! This library is a comprehensive collection of mathematical functions and theorems, ranging from basic arithmetic to more advanced topics like trigonometry, coordinate geometry, and matrix operations. The goal of this library is to provide a robust toolkit for developers and students to perform various mathematical operations easily.

Features
Basic Arithmetic: Addition, subtraction, multiplication, and division.
Power and Root Functions: Square, cube, square root, cube root, and general exponentiation.
Trigonometry: Sine, cosine, tangent, and their inverse functions.
Hyperbolic Functions: Hyperbolic sine, cosine, and tangent.
Complex Numbers: Addition, subtraction, multiplication, and division of complex numbers.
Matrix Operations: Creation, deletion, addition, subtraction, and multiplication of matrices.
Arithmetic Progression: Calculation of nth term and sum of arithmetic progressions.
Quadratic Equations: Solving quadratic equations.
Coordinate Geometry: Distance between points and midpoint calculation.
Divisibility Rules: Check if a number is divisible by another number.
Pythagorean Theorem: Calculate the hypotenuse of a right triangle.
Factorial: Compute the factorial of a number.
Fibonacci: Calculate Fibonacci numbers.
Getting Started
Prerequisites
You need a C compiler to build the library and run the examples. Make sure you have GCC or any other C compiler installed.

Building the Library
Clone the repository:

sh
Copy code
git clone https://github.com/yourusername/advmath.git
cd advmath
Compile the library:

sh
Copy code
gcc -c advmath.c -o advmath.o
Compile the example program:

sh
Copy code
gcc -o example example.c advmath.o -lm
Run the example program:

sh
Copy code
./example
Usage
Include the Header
Include the advmath.h header file in your C program to access the library functions.

c
Copy code
#include "advmath.h"
Example
Here’s a simple example demonstrating some functions of the library:

c
Copy code
#include <stdio.h>
#include "advmath.h"

int main() {
    double a = 3.0;
    double b = 4.0;

    // Basic arithmetic
    printf("Add: %f\n", add(a, b));
    printf("Subtract: %f\n", subtract(a, b));
    printf("Multiply: %f\n", multiply(a, b));
    printf("Divide: %f\n", divide(a, b));

    // Pythagorean theorem
    printf("Hypotenuse: %f\n", pythagorean_theorem(a, b));

    // Trigonometric functions
    double angle = 0.5; // In radians
    printf("Sine: %f\n", sine(angle));
    printf("Cosine: %f\n", cosine(angle));
    printf("Tangent: %f\n", tangent(angle));

    // Factorial
    int n = 5;
    printf("Factorial of %d: %llu\n", n, factorial(n));

    // Fibonacci
    printf("Fibonacci of %d: %llu\n", n, fibonacci(n));

    return 0;
}
Contributing
Contributions are welcome! Please fork the repository and submit a pull request for any improvements or additional functions you would like to add.

Fork the repository.
Create a new branch: git checkout -b feature-branch.
Make your changes and commit them: git commit -m 'Add new feature'.
Push to the branch: git push origin feature-branch.
Submit a pull request.
