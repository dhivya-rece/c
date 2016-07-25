#include<stdio.h>
void main()
{
int a,b,c,d,e,f;
printf("enter seed and number");
scanf("%d %d",&a,&f);
c=a;
d=1;
while(a>0)
b=a%10;
a=a/10;
d=d*b;
}
e=d*c;
if(e==f)
{
printf("the seed is matched");
}
else
{
printf("the seed is not matched");
}
}