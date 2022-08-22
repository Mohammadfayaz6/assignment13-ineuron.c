//8. Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fibonacci(int n)
{
   if(n==1||n==0)
    return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

  int main()
  {
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int i;
    printf("first N terms of fibonacci series\n");
    for(i=0;i<num;i++)
    {
       printf("%d ",fibonacci(i));
    }
    return 0;
  }