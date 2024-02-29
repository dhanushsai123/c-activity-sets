#include <stdio.h>
int input();
void compare(int a, int b, int c,int *largest);
void output(int a, int b, int c, int largest);
int main() 
{
    int num1, num2, num3, largest;
    num1 = input();
    num2 = input();
    num3 = input();
    
    compare(num1, num2, num3, &largest);
    
  output(num1, num2, num3, largest);
    
    return 0;
}
int input() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
void compare(int a, int b,int c,int *largest)
{
   *largest = a;
    if (b > *largest) {
        *largest = b;
    }
    
    if (c > *largest) {
        *largest = c;
    }
}
   void output(int a, int b, int c,int largest)

 {
    printf("largst of %d,%d and %d is %d\n", a, b, c,largest);

    output;
}