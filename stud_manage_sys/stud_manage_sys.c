#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int n=2; //number of students
struct student
{
    char firstName[50];
    int roll;
    float percentage;
} s[10];

union contact
{
    char email[100];
    char mobile[10];
} x[10];

int main()
{
    int i, choice[n];
    printf("-----------Enter information of students:----------\n");

    // storing information
    for (i = 0; i < n; ++i)
    {
        s[i].roll = i + 1;
        printf("For Student bearing roll number  %d ,\n", s[i].roll);
        printf("Enter name:");
        scanf("%s",s[i].firstName);
        printf("Enter percenatge obtained: ");
        scanf("%f", &s[i].percentage);
        printf("Enter a contact detail \n1:Email\n2:Phone Number\n");
        scanf("%d",&choice[i]);
        switch(choice[i])
        {
        case 1:
        {
            printf("Enter Email\n");
            scanf("%s",&x[i].email);
            break;
        }
        case 2:
        {
            printf("Enter Phone Number\n");
            scanf("%s",&x[i].mobile);
            break;
        }
        default :
        exit(0);
        }
    }
    printf("\n\n-------------Displaying Information:------------\n\n");

    // displaying information
    for (i = 0; i <n ; ++i)
    {
        printf("\nRoll number        : %d\n", i + 1);
        printf("First name         : ");
        puts(s[i].firstName);
        printf("Percentage         : %.2f%", s[i].percentage);
        if(choice[i]==1)
        {printf("\nEmail              : ");
            puts(x[i].email);
        }
        else{printf("\nPhone              : ");
            puts(x[i].mobile);
        }
        printf("\n");
    }
    return 0;
}
//123spara@g
