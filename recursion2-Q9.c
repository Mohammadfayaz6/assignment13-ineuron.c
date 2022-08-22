//9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int countdigits(int n)
{
    if(n/10==0)
    return 1;
    return 1+countdigits(n/10);
}
int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    int res=countdigits(num);
    printf("The given number %d has %d digits",num,res);
    return 0;
}