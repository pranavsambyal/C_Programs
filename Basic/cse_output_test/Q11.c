#include<stdio.h>
int main()
{
    int i,j,k,x=0;
    for(i=0; i<5; ++i)
        for(j=0; j<1; ++j)
        {
            switch(i+j-1)
            {
            case -1:
            case 0:
                x+=1;
                break;
            case 1:
            case 2:
            case 3:
                x+=2;
                break;
            default:
                x+=3;
            }
            printf("%d",x);
        }
    printf("\n x=%d",x);
}
