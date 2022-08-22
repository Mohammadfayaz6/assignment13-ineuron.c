//5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sumofdigits(int num)
{
     if(num==0)
     return 0;
     int sum=num%10+sumofdigits(num/10);
     return sum;   
}
  int main()
  {
    int var;
    printf("Enter a number\n");
    scanf("%d",&var);
    printf("number=%d\n",var);
    int res=sumofdigits(var);
    printf("sum of digits is %d",res);
     return 0;
  }