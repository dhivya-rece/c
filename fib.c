#include<stdio.h>
void main()
{
int a=0,b=1;c;
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
c=a+b;
a=b;
b=c;
}
printf("%d", c);
}