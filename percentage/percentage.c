#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,s;
    float r,p;
    printf(" INPUT MARKS IN 5 SUBJECTS IN THE SEQUENCE \n MATHS \n SCIENCE \n ENG \n HINDI \n C++\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
          f=500;
          s=a+b+c+d+e;
          r=s/f;
          p=r*100;
   printf("PERCENTAGE IS %f",p);
}
