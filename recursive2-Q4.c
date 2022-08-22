//4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sumofsquares(int n)
{
     if(n==0)
     return 0;
     int sum=n*n+sumofsquares(n-1);
     return sum;
}

  int main()
  {
     int num;
     printf("enter a number\n");
     scanf("%d",&num);
     printf("sum of squares of first N natural numbers:%d",sumofsquares(num));
     return 0;
  }