#include<stdio.h>
int main()
{
    int a,b,c;
    printf("INPUT 2 NUMBERS\n");
    scanf("%d %d",&a,&b);
    printf("NUMBER YOU ENTERED ARE ....A=%d B=%d\n",a,b);
    a=a+b;b=a-b;a=a-b;
    printf("NUMBER SWAPED ARE .........A=%d B=%d\n",a,b);
}
