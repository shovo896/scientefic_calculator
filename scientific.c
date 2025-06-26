#include "scientific.h"
#include <math.h>
#include <stdio.h>

double sine(double x) {
    return sin(x);
}

double cosine(double x) {
    return cos(x);
}

double logarithm(double x) {
    if (x <= 0) {
        printf("Error: Logarithm domain\n");
        return 0;
    }
    return log(x);
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

