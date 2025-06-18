#include <stdio.h>

void sum(int number1, int number2) {
    int result = number1 + number2;
    printf("%d + %d = %d\n", number1, number2, result);
    return;
}

void subtract(int number1, int number2) {
    int result = number1 - number2;
    printf("%d - %d = %d\n", number1, number2, result);
    return;
}

void multiply(int number1, int number2) {
    int result = number1 * number2;
    printf("%d * %d = %d\n", number1, number2, result);
    return;
}

void divide(int number1, int number2) {
    if (number2 == 0) {
        printf("Undefined. You can't divide by zero.");
    }
    else {
        int result = number1 / number2;
        int modulus = number1 % number2; 
        printf("%d / %d = %d remainder %d\n", number1, number2, result, modulus);
    }
    return;
}