#include<stdio.h>
int main(void)
{int a=6,b=4;
int i=99;
while(i)
{printf("a=%d,b=%d\n",a,b);
a/=2;
b%=3;
i--;
}}
