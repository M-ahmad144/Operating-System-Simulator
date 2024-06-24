#include <stdio.h>
#include <unistd.h> // for sleep

int main() {
    char operator;
    double num1, num2, result;

    // Clear the screen
    printf("\033[2J\033[1;1H");

    // Welcome message
    printf("\033[1;32mWelcome to Calculator Program!\033[0m\n\n");

    // Prompt for operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Prompt for numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\033[1;36m%.2lf + %.2lf = %.2lf\033[0m\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("\033[1;36m%.2lf - %.2lf = %.2lf\033[0m\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("\033[1;36m%.2lf * %.2lf = %.2lf\033[0m\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("\033[1;31mError! Division by zero.\033[0m\n");
            } else {
                result = num1 / num2;
                printf("\033[1;36m%.2lf / %.2lf = %.2lf\033[0m\n", num1, num2, result);
            }
            break;
        default:
            printf("\033[1;31mError! Invalid operator.\033[0m\n");
    }

    // Brief pause before exiting
    sleep(2);

    return 0;
}
