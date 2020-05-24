#include<stdio.h>
#include<conio.h>
int main()
{
    int c ;float a,b,s;float f;
    printf(" WHAT FUNCTION YOU WANT YOU USE:\n 1:ADDITION \n 2:SUBTRACTION \n 3:MULTIPLICATION \n 4:DIVISION \n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
    {
        printf("ENTER THE NUMBERS \n");
        scanf("%f %f",&a,&b);
        s=a+b;
        printf("SUM IS %f",s);
        break;
    }
    case 2:
    {
        printf("ENTER THE NUMBERS \n");
        scanf("%f %f",&a,&b);
        s=a-b;
        printf("DIFFERENCE IS %f",s);
        break;
    }
    case 3:
    {
        printf("ENTER THE NUMBERS \n");
        scanf("%f %f",&a,&b);
        s=a*b;
        printf("PRODUCT IS %f",s);
        break;
    }
    case 4:
    {
        printf("ENTER THE NUMBERS FIRST IS DIVIDENT AND SECOND IS DIVISOR \n");
        scanf("%f %f",&a,&b);
        if(b==0)
            printf("ANSWER IS INFINITY");
        else
        {
            f=a/b;
            printf("DIVISION IS %f",f);
        }
        break;
    }
    }
}
