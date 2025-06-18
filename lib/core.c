#include <stdio.h>
#include "operations.h";

struct Values {
    int number1;
    int number2;
};

struct Values set_values() {
    int number1, number2;
    struct Values values_list;

    printf("Add number #1:\n> ");
    scanf("%d", &number1);
    printf("Add number #2:\n> ");
    scanf("%d", &number2);

    values_list.number1 = number1;
    values_list.number2 = number2;

    return values_list;
}

void get_option(int option) {
    struct Values values_list;
    
    switch (option)
    {
    case 0:
        printf("Quitting...\n");
        break;
    case 1:
        values_list = set_values();
        sum(values_list.number1, values_list.number2);
        break;
    case 2:
        values_list = set_values();
        subtract(values_list.number1, values_list.number2);
        break;
    case 3:
        values_list = set_values();
        multiply(values_list.number1, values_list.number2);
        break;
    case 4:
        values_list = set_values();
        divide(values_list.number1, values_list.number2);
        break;
    default:
        printf("Invalid option. Try again.\n");
        break;
    }
    return;
}