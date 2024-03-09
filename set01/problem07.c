#include <stdio.h>

int input_n(){
  int n;
  printf("Enter the value of n:");
  scanf("%d",&n);
  return n;
}
int sum_n_nos(int n) {
    int sum=0;
    for (int i = 1; i <= n; i++) {
        sum+=i;
    }
    return sum;
}

int main()  {
    int n = input_n();
    int sum = sum_n_nos(n);
    output(n, sum);
    return 0;
}

