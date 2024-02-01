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
    Complex num1, num2, result;

    printf("Enter the real and imaginary parts of the first complex number:\n");
    num1 = input_complex();

    printf("Enter the real and imaginary parts of the second complex number:\n");
    num2 = input_complex();

    result = add_complex(num1, num2);

    output(num1, num2, result);

    return 0;
}

Complex input_complex() {
    Complex num;
    printf("Real part: ");
    scanf("%f", &num.real);
    printf("Imaginary part: ");
    scanf("%f", &num.imaginary);
    return num;
}

Complex add_complex(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

void output(Complex a, Complex b, Complex sum) {
    printf("Sum of (%.1f + %.1fi) and (%.1f + %.1fi) is: %.1f + %.1fi\n", 
           a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}