#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main() 
{
    int side1, side2, side3;
    
    // Input sides of the triangle
    side1 = input_side();
    side2 = input_side();
    side3 = input_side();
    
    // Check if the triangle is scalene
    int isscalene = check_scalene(side1, side2, side3);
    
    // Output the result
    output(side1, side2, side3, isscalene);

    return 0;
}

// Function to input a side of the triangle
int input_side() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}

// Function to check if the triangle is scalene
int check_scalene(int a, int b, int c) {
    if (a != b && b != c && a != c) {
        return 1; // Scalene triangle
    } else {
        return 0; // Not a scalene triangle
    }
}

// Function to output the result
void output(int a, int b, int c, int isscalene) {
    if (isscalene) {
        printf("The triangle with sides %d, %d, and %d is scalene.\n", a, b, c);
    } else {
        printf("The triangle with sides %d, %d, and %d is not scalene.\n", a, b, c);
    }
}
