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
    printf("9. Degrees to Radians\n");
    printf("10. Radians to Degrees\n");
    printf("11. Exit\n");
    printf("Choose option: ");
}

void print_advanced_menu() {
    printf("\n╔══════════════════════════════════════════╗\n");
    printf("║     ADVANCED SCIENTIFIC CALCULATOR MENU      ║\n");
    printf("╠══════════════════════════════════════════════╣\n");
    printf("║ BASIC ARITHMETIC:                            ║\n");
    printf("║  1. Addition          2. Subtraction         ║\n");
    printf("║  3. Multiplication    4. Division            ║\n");
    printf("╠══════════════════════════════════════════════╣\n");
    printf("║ TRIGONOMETRY:                                ║\n");
    printf("║  5. sin(x)            6. cos(x)              ║\n");
    printf("║  7. tan(x)            8. cot(x)              ║\n");
    printf("║  9. sec(x)           10. csc(x)              ║\n");
    printf("╠══════════════════════════════════════════════╣\n");
    printf("║ INVERSE TRIGONOMETRY:                        ║\n");
    printf("║ 11. arcsin(x)        12. arccos(x)           ║\n");
    printf("║ 13. arctan(x)                                ║\n");
    printf("╠══════════════════════════════════════════════╣\n");
    printf("║ POWER & ROOTS:                               ║\n");
    printf("║ 14. Power (a^b)      15. Square Root         ║\n");
    printf("║ 16. Cube Root                                ║\n");
    printf("╠══════════════════════════════════════════════╣\n");
    printf("║ LOGARITHMS:                                  ║\n");
    printf("║ 17. ln(x)            18. log₁₀(x)            ║\n");
    printf("║ 19. logₙ(x)                                  ║\n");
    printf("╠══════════════════════════════════════════════╣\n");
    printf("║ OTHER FUNCTIONS:                             ║\n");
    printf("║ 20. e^x              21. Factorial (n!)      ║\n");
    printf("║ 22. Absolute Value                           ║\n");
    printf("╠══════════════════════════════════════════════╣\n");
    printf("║ STATISTICS:                                  ║\n");
    printf("║ 23. Statistical Analysis (Mean, SD, etc.)    ║\n");
    printf("╠══════════════════════════════════════════════╣\n");
    printf("║ 24. EXIT                                     ║\n");
    printf("╚══════════════════════════════════════════════╝\n");
    printf("Enter your choice: ");
}

double get_input() {
    double x;
    printf("Enter number: ");
    scanf("%lf", &x);
    return x;
}
