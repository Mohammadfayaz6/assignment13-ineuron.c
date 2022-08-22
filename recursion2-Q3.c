//3. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sumofeven(int n)
{
    if(n==0)
    return 0;
    int sum=2*n+sumofeven(n-1);
    return sum;
}

  int main()
  {
     int num;
     printf("enter a number\n");
     scanf("%d",&num);
     printf("sum of first N even natural numbers:%d",sumofeven(num));
     return 0;
  }