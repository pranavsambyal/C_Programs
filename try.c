#include<stdio.h>
int fib(int,int,int);
int main()
{int n;
printf("Enter the number of term you want\n");
    scanf("%d",&n);
     int a=0, b=1,c;
        printf("%d\t",a);
        printf("%d\t",b);
        c=a+b;
        printf("%d\t",c);
        fib(b,c,n-3);
    }
 int fib(int x,int y,int n)
{int s;
        n--;
        s=x+y;
printf("%d\t",s);
        if(n>0)
        {fib(y,s,n);

    }

    }

