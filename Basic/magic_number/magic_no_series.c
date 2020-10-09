#include<stdio.h>
int main()
{
    int a,b,c=0,num=0,rev=0,fin,cmp,d;
    printf("ENTER A NUMBER\t ");
    scanf("%d",&a);
    int check=cmp=a;
    do{
        num=0,rev=0;int k=cmp;
        while(k!=0)
        {
            b=k%10;
            num=num+b;
            k=k/10;
        }

        int num1=num;
        while(num!=0)
        {
            d=num%10;
            rev=d+(rev*10);
            num=num/10;
        }
        fin=rev*num1;
        if(cmp==fin)
        {
            printf("%d IS A MAGIC NUMBER-----------------------------------------------------------\n",fin);
        }
        else
        {
            printf("%d IS NOT A MAGIC NUMBER\n",cmp);
        }
        cmp--;
    }while(cmp>=1);
}
