#include<stdio.h>
int main()
{
    int a,b,c,r;

    printf("ENTER 2 NO......");
    scanf("%d %d",&a,&b);
    c=a%b;
    if(c!=0)
    {
        do
        {
            r=b%c;

            b=c;
            c=r;


        }
        while(r!=0);
        printf("hcf is %d ",b);
    }
    else
        printf("hcf is %d",b);
}
