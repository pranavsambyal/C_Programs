#include<stdio.h>
int main()
{int a,b,c=0,i=10,num=0,rev=0,fin,cmp,d;
printf("ENTER A NUMBER\t ");
scanf("%d",&a);
cmp=a;
while(a!=0)
{b=a%i;
num=num+b;
a=a/i;}
int num1=num;

while(num!=0)
{d=num%i;
rev=(rev*i)+d;
num=num/10;
}
fin=rev*num1;
if(fin==cmp){printf("%d IS A MAGIC NUMBER",fin);}
else {printf("%d IS NOT A MAGIC NUMBER",cmp);}
}
