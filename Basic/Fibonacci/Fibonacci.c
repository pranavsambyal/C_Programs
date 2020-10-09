#include<stdio.h>
int main()
{
    int b=0,a=1,n,s;
    printf("INPUT THE NO TILL WHICH YOU WHAT THE FIBONACCI SERIES \t ");
    scanf("%d",&n);
    printf("%d %d ",b,a);
    while(a<n)
    {
        s=a+b;
        printf("%d ",s);
        b=a;
        a=s;


    }

}
