#include<stdio.h>
int main()
{
    int arry[3][4];
    printf("enter\n");
    for(int j=0; j<=3; j++)
    {
        for(int i=0; i<=2; i++)
        {
            printf("Input [%d][%d]",i,j);
            scanf("%d\t",&arry[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d\t",arry[i][j]);
        }
        printf("\n");
    }




}
