#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n,int result);

int main() {
    int number = input_number();

    int result = is_composite(number);

    output(number,result);

    return 0;
}

int input_number() {
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    return n;

}

