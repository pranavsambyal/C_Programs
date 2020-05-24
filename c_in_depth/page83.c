#include<stdio.h>
main()
{
    int n;
    printf("Enter the number ") ;
    scanf("%d",&n);
    if(n%2==0)
        goto even;
    else
        goto odd;
even:
    printf ("Number is even");
    goto end;
odd:
    printf ("Number is odd");
    goto end;
end:
    printf("\n");
}
