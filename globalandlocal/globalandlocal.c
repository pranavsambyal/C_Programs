#include<stdio.h>
int a=3;
void pri();
int main()
{
    int a=5;
    {
     printf("a=%d\n",a);
        {int a=8;
            printf("a=%d\n",a);
        }
        pri();
    }
    printf("a=%d\n",a);
}
void pri()
{
    printf("a{global}=%d\n",a);

}
