#include <stdio.h>

int input_side() {
    int side;
    printf("Enter a side length: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c) {
    if (a != b && b != c && a != c) {
        return 1; // Scalene
    } else {
        return 0; // Not Scalene
    }
}

void output(int a, int b, int c, int isscalene) {
    if (isscalene) {
        printf("The triangle with sides %d, %d, and %d is scalene\n", a, b, c);
    } else {
        printf("The triangle with sides %d, %d, and %d is not scalene\n", a, b, c);
    }
}

int main() {
    int side1 = input_side();
    int side2 = input_side();
    int side3 = input_side();

    int isscalene = check_scalene(side1, side2, side3);

    output(side1, side2, side3, isscalene);

    return 0;
}