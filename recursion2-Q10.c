//10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int calculatepow(int num,int pow)
{
 if(pow==0)
    return 1;
 else
   return num*calculatepow(num,pow-1);
}
int main()
{
    int x,y;
    printf("enter the number and its power\n");
    scanf("%d%d",&x,&y);
    int res=calculatepow(x,y);
    printf("the power of number is %d",res);
    return 0;
}