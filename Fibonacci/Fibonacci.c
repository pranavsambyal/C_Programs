#include<stdio.h>
int main()
{
    int b=0,a=0,n,s;
    printf("INPUT THE NO TILL WHICH YOU WAHT THE FIBONACCI SERIES \t ");
    scanf("%d",&n);
    while(a<=n)
    {
        s=a+b;
        printf("%d ",s);
        b=a;
        a=s;


    }

}