#include<stdio.h>
int main()
{
    int a,b,c;
    int f=0;
    while(f==0)
    {
        printf("ENTER THE NUMBERS\n");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("SUM IS %d\n",c);
        c=a-b;
        printf("DIFFERENCE IS %d\n",c);
        c=a/b;
        printf("DIVISION IS %d\n",c);
        c=a*b;
        printf("PRODUCT IS %d\n",c);
        c=a%b;
        printf("REMAINDER IS %d\n",c);
        printf("------------------------------------------------------------------------------------------------------------------------");

    }
}
