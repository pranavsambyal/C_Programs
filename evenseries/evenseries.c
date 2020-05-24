#include<stdio.h>
int main()
{
    int a=2,w,b;
    printf("INPUT THE NUMBER TILL WHICH YOU WANT THE EVEN SERIES\n");
    scanf("%d",&b);
    while(a<=b)
    {
        printf("%d\t",a);
        a=a+2;
    }


}
