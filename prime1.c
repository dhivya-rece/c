#include<stdio.h>
void main()
{
int i,j,b,n1,n2;
scanf("%d %d",&n1,n2);
for(i=n1;i<=n2;i++)
{
for(j=2;j<i;j++)
{
b=i%j;
if(b==0)
{
break;
}
if(i==j)
{
printf("%d",i);
}
}
}
}