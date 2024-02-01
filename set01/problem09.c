#include <stdio.h>
int get_array_size();
void get_array_values(int n, int a[n]);
int find_sum_array(int n, int a[n], int sum);
void output(int sum);

int get_array_size()
{
    int n;
    printf("Enter the size of array : \n");
    scanf("%d",&n);
    return n;
}
void get_array_values(int n, int a[n])
{
    for (int i=0; i<n; i++)
{
    printf("enter the values \n");
    scanf("%d",&a[i]);
}
}
int find_sum_array(int n, int a[n], int sum)
{
    sum=0;
    for (int i=0; i<n; i++) 
{
   sum= a[i]+sum;
}
return sum;
}
void output(int sum)
{
    printf("the sum of arrays is %d",sum);
}    
int main()
{
    int n, sum=0;
    n= get_array_size();
     int a[n];
    get_array_values(n,a);
    sum=find_sum_array(n,a, sum);
    output(sum);
    return 0;
}