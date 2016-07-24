#include<stdio.h>
void main()
{
int a[];
int i,j,n,c;

scanf("%d",&n);
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);
c=a[0];}
for(j=0;j<n;j++)
{
if(c<a[i])
{
c=a[i];
}

printf("%d",c);
}
for(j=0;j<n;j++)
{
if(c>a[i])
{
c=a[i];
}

printf("%d",c);
}
}


