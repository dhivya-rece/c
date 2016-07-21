#include<stdio.h>
void main()
{
int fact;
int i;
scanf("%d",&fact);
for(i=fact;i<=0;i)
{
fact=fact*i;
}
printf("factorial is %d",fact);
}
