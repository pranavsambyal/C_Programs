#include<stdio.h>
int main()
{int a,b,c=0,i=1,num=0;
printf("ENTER A NUMBER\t ");
scanf("%d",&a);
while(i<a)
{b=a%i;
if(b==0){num=num+i;}
i++;}
if(num==a){printf("%d IS A PERFECT NUMBER",num);}
else {printf("%d IS NOT A PERFECT NUMBER",a);}
}
