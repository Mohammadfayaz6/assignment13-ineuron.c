//2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sumofodd(int n)
{
  if(n==0)
  return 0;
  int sum=2*n-1+sumofodd(n-1);
  return sum;

}
 int main()
 {
  int x;
  printf("enter a number\n");
  scanf("%d",&x);
  int res=sumofodd(x);
  printf("sum of first N natural numbers %d",res);
    return 0;
 }