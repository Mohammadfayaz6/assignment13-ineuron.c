//1. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sumofnatural(int n)
{
  if(n==0)
  return 0;
  int sum=n+sumofnatural(n-1);
  return sum;

}
 int main()
 {
  int x;
  printf("enter a number\n");
  scanf("%d",&x);
  int res=sumofnatural(x);
  printf("sum of first N natural numbers %d",res);
    return 0;
 }