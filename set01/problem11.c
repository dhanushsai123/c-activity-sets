#include <stdio.h>

struct _complex {
    float real;
    float imaginary;
};
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
int main() {
    Complex num1, num2, sum;
    
    printf("Enter the real part of the first complex number: ");
    num1.real = input_complex().real;
    printf("Enter the imaginary part of the first complex number: ");
    num1.imaginary = input_complex().imaginary;
    
    printf("Enter the real part of the second complex number: ");
    num2.real = input_complex().real;
    printf("Enter the imaginary part of the second complex number: ");
    num2.imaginary = input_complex().imaginary;
    
    sum = add_complex(num1, num2);
    output(num1, num2, sum);
    return 0;
}

Complex input_complex() {
    Complex num;
    scanf("%f %f", &num.real, &num.imaginary);
    return num;
}

Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum) {
    printf("Sum of complex numbers:\n");
    printf("First Complex Number: %.2f + %.2fi\n", a.real, a.imaginary);
    printf("Second Complex Number: %.2f + %.2fi\n", b.real, b.imaginary);
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imaginary);
}