#include <stdio.h>

// Function declarations
void input(float *base, float *height);
void find_area(float base, float height, float *area);
void output(float base, float height, float area);

int main() {
    float base, height, area;

    // Input function
    input(&base, &height);

    // Calculate area function
    find_area(base, height, &area);

    // Output function
    output(base, height, area);

    return 0;
}

// Function to take input
void input(float *base, float *height) {
    printf("Enter the base of the triangle: ");
    scanf("%f", base);

    printf("Enter the height of the triangle: ");
    scanf("%f", height);
}

// Function to calculate area
void find_area(float base, float height, float *area) {
    *area = 0.5 * base * height;
}

// Function to display output
void output(float base, float height, float area) {
    printf("The area of the triangle with base %.6f and height %.6f is %.6f\n", base, height, area);
}