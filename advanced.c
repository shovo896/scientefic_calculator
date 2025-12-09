#include "advanced.h"
#include <math.h>
#include <stdio.h>

// Trigonometric functions
double tangent(double x) {
    return tan(x);
}

double cotangent(double x) {
    if (sin(x) == 0) {
        printf("Error: Cotangent undefined\n");
        return 0;
    }
    return 1.0 / tan(x);
}

double secant(double x) {
    if (cos(x) == 0) {
        printf("Error: Secant undefined\n");
        return 0;
    }
    return 1.0 / cos(x);
}

double cosecant(double x) {
    if (sin(x) == 0) {
        printf("Error: Cosecant undefined\n");
        return 0;
    }
    return 1.0 / sin(x);
}

// Inverse trigonometric functions
double arcsine(double x) {
    if (x < -1 || x > 1) {
        printf("Error: Arcsine domain error (must be -1 to 1)\n");
        return 0;
    }
    return asin(x);
}

double arccosine(double x) {
    if (x < -1 || x > 1) {
        printf("Error: Arccosine domain error (must be -1 to 1)\n");
        return 0;
    }
    return acos(x);
}

double arctangent(double x) {
    return atan(x);
}

// Advanced mathematical functions
double square_root(double x) {
    if (x < 0) {
        printf("Error: Cannot calculate square root of negative number\n");
        return 0;
    }
    return sqrt(x);
}

double cube_root(double x) {
    return cbrt(x);
}

double factorial(int n) {
    if (n < 0) {
        printf("Error: Factorial not defined for negative numbers\n");
        return 0;
    }
    if (n > 20) {
        printf("Warning: Result may overflow for n > 20\n");
    }
    
    double result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double exponential(double x) {
    return exp(x);
}

double absolute_value(double x) {
    return fabs(x);
}

// Logarithmic functions
double log_base_10(double x) {
    if (x <= 0) {
        printf("Error: Logarithm domain error\n");
        return 0;
    }
    return log10(x);
}

double log_base_n(double x, double base) {
    if (x <= 0 || base <= 0 || base == 1) {
        printf("Error: Invalid logarithm parameters\n");
        return 0;
    }
    return log(x) / log(base);
}
