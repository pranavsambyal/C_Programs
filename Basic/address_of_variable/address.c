#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of a");
    scanf("%d",&a);
    
    printf("Value of a:%d and Address of a:%d\n\n",a,&a);
}