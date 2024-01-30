//2. Write a C program to add two numbers.
#include <stdio.h>

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    result = addNumbers(num1, num2);

    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
} 
