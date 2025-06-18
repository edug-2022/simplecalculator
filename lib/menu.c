#include <stdio.h>

void menu() {
    printf("▄▄·  ▄▄▄· ▄▄▌   ▄▄·\n▐█ ▌▪▐█ ▀█ ██•  ▐█ ▌▪\n██ ▄▄▄█▀▀█ ██▪  ██ ▄▄\n▐███▌▐█ ▪▐▌▐█▌▐▌▐███▌\n·▀▀▀  ▀  ▀ .▀▀▀ ·▀▀▀\n");
    printf("Choose an option typing a number:\n\n");
    printf("1. Sum\n");
    printf("2. Subtract\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("0. Exit\n");
    return;
}

int set_option() {
    int option;
    printf("> ");
    scanf("%d", &option);
    return option;
}
