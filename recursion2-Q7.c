//7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int calculatehcf(int x,int y)
{
    if(y==0)
    return x;
    calculatehcf(y,x%y);
}
int main()
{
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
   int res=calculatehcf(x,y);
   printf("hcf of %d and %d is %d",x,y,res);
    return 0;
}