#include<stdio.h>
void main()
{
int n,i,k,m,count=0;
scanf("%d",&n);
m=n;
while(n>0)
{
n=n/10;
++count;
}
printf("%d",count);
}
while(m>0)
{
k=m%10;
m=m/10;
for(i=count;i>=0;i--)
{
printf("%d",k);
}
}
}