#include <stdio.h>

// Function to input the size of the array
int input_array_size() {
    int n;
    printf("Input array size: ");
    scanf("%d", &n);
    return n;
}

// Function to input the array elements
void input_array(int n, int a[n]) {
    printf("Input the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

// Function to calculate the sum of array elements
int sum_n_array(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

// Function to output the result
void output(int n, int a[n], int sum) {
    printf("The sum of ");
    for (int i = 0; i < n - 1; i++) {
        printf("%d + ", a[i]);
    }
    printf("%d is %d\n", a[n - 1], sum);
}

int main() {
    int n = input_array_size(); // Input the size of the array
    int a[n];                   // Declare an array of size n
    input_array(n, a);          // Input the array elements
    int sum = sum_n_array(n, a); // Calculate the sum
    output(n, a, sum);           // Output the result
    return 0;
}














