// sum program with data validation

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int x, y, sum;

    printf("Welcome to the simple addition calculator\n");

    printf("Enter your first number: ");
    if (scanf("%d", &x) != 1) {
        printf("That's not a real number. Go away!");
        return EXIT_FAILURE;
    }

    printf("And the second number: ");
    if (scanf("%d", &y) != 1) {
        printf("That's not a real number. Go away!");
        return EXIT_FAILURE;
    }

    sum = x + y;

    printf("The sum of %d and %d is %d\n", x, y, sum);

    return EXIT_SUCCESS;
}
