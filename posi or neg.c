#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("enter the no:");
scanf("%d",&n);
if(n>0)
{
printf(" the %d is positive",n);
}
else if(n<0)
{printf("the %d is negative",n);}
else if(n==0)
{
  printf("it is zero");

}
return 0;
}
