#include<stdio.h>
int main()
{int i=0,x=0;
for(i=1;i<10;++i)
    {if(i%2==1)
    x+=1;
else
    x--;
printf("%d",x);
continue;}
printf("\n x=%d",x);
}
