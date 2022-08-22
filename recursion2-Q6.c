//6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int calculatefact(int n)
{
    if(n==0)
    {
        return 1; 
    }
    int sum;
      sum=(n*calculatefact(n-1));
      return sum;

      
}
   int main()
   {
     int num;
     printf("Enter a number\n");
     scanf("%d",&num);
    int sum=calculatefact(num);
    printf("The factoral of a given number is %d",sum);
     return 0;
   }
   