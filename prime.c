#include<stdio.h>
void main(){
int i,j;
int n,n1,b;
scanf("%d",&n);
scanf("%d",&n1);
for(i=n;i<=n1;i++)
{
for(j=2;j<=i;j++)
{

b=i/j;
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