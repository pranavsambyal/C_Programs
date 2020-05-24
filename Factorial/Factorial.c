#include<stdio.h>
int main()
{
    int n;double a=1;
    printf("INPUT THE NO WHOSE FACTORIAL YOU WANT TO CALCULATE ");
    scanf("%d",&n);
    while(n>=1)
        {a=a*n;
         n=n-1;
        }
    printf("FACTORIAL IS %f",a );
}
