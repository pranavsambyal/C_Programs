#include<stdio.h>
#include<ctype.h>
int main()
{
    int a=0,b=0,c=0,d;
    printf("ENTER THE NO TILL WHICH YOU WANT POLYNOMIAL\n");
    scanf("%d",&d);
    do{
    printf("x%dy%d+",a,b);
    a=a+1;
    b=b+1;
    c=c+1;
    }while(c<d);
    printf("x%dy%d",a,b);


}
