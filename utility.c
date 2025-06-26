#include <stdio.h>
#include "utility.h"

void print_menu() {
    printf("\n--- Scientific Calculator Menu ---\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Sine\n");
    printf("6. Cosine\n");
    printf("7. Logarithm (natural log)\n");
    printf("8. Power (a^b)\n");
    printf("9. Exit\n");
    printf("Choose option: ");
}

double get_input() {
    double x;
    printf("Enter number: ");
    scanf("%lf", &x);
    return x;
}

