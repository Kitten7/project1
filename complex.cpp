#include<stdio.h>
int main()
{
int a,b,c,d;
scanf("%d%d\n%d%d",&a,&b,&c,&d);
a=a+c;
b=b+d;
if(a==0)
printf("%di",b);
else
printf("%d+%di",a,b);
return 0;

}
