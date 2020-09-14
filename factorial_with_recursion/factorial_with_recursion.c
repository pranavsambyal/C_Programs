#include<stdio.h>
int fact(int);
int main()
{
	unsigned int num,final;
	printf("Enter The Number Whose Factorial You What\n");
	scanf("%d",&num);
	final=fact(num);
	printf("The factorial of %d is %d",num,final);
}
int fact(int num)
{ int ans;
	if(num==1)
		return num;
	else
    {
        ans=num*fact(num-1);

    }
		return ans;
}
