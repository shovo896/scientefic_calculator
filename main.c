#include <stdio.h>
#include "arithmetic.h"
#include "scientific.h"
#include "utility.h"
#include "conversions.h"

int main() {
    int choice;
    double a, b;

    while (1) {
        print_menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                a = get_input(); b = get_input();
                printf("Result: %.2f\n", add(a, b));
                break;
            case 2:
                a = get_input(); b = get_input();
                printf("Result: %.2f\n", subtract(a, b));
                break;
            case 3:
                a = get_input(); b = get_input();
                printf("Result: %.2f\n", multiply(a, b));
                break;
            case 4:
                a = get_input(); b = get_input();
                printf("Result: %.2f\n", divide(a, b));
                break;
            case 5:
                a = get_input();
                printf("Result: %.2f\n", sine(a));
                break;
            case 6:
                a = get_input();
                printf("Result: %.2f\n", cosine(a));
                break;
            case 7:
                a = get_input();
                printf("Result: %.2f\n", logarithm(a));
                break;
            case 8:
                a = get_input(); b = get_input();
                printf("Result: %.2f\n", power(a, b));
                break;
            case 9:
                a = get_input();
                printf("Result: %.4f radians\n", degrees_to_radians(a));
                break;
            case 10:
                a = get_input();
                printf("Result: %.4f degrees\n", radians_to_degrees(a));
                break;
            case 11:
                printf("Exiting calculator.\n");
                return 0;
            default:
                printf("Invalid option. Try again.\n");
        }
    }

    return 0;
}

