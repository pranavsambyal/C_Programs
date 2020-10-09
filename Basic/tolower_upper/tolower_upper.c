#include<stdio.h>
#include<ctype.h>
#include<strings.h>
int main()
{
    char a[50];
    printf("ENTER SOME CHARACTERS\n");
    gets(a);
    for(int i=0; i<=49; i++)
    {
        if(isupper(a[i]))
        {
            a[i]=tolower(a[i]);
        }
        else if(islower(a[i]))
        {
            a[i]=toupper(a[i]);
        }
    }
    puts(a);
}
