#include<stdio.h>
int main()
{
    int a,b,c=0,i=1,num=0,a1;
    printf("ENTER A NUMBER\t ");
    scanf("%d",&a1);
    a=a1;
    while(a!=0)
    {
        num=0,b=0,i=1;


        while(i<a)
        {
            b=a%i;
            if(b==0)
            {
                num=num+i;
            }
            i++;
        }
        if(num==a)
        {
            printf("%d IS A PERFECT NUMBER-----------------------------------------\n",num);
        }
        else
        {
            printf("%d IS NOT A PERFECT NUMBER\n",a);
        }
        a--;
    }
}
