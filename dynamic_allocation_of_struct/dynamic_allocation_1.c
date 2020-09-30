/*Create a structure with data members as "roll no", "name" and "address". Take "roll no" and "name" at run time and generate dynamic memory allocation for variable "address".
Print the above values for 10 persons.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student //structure declaration
{
    int roll_no;
    char *name;
    char *address;
};

int main()
{
    struct student stud[10];
    for (int x = 0; x < 10; x++)

    {
        char temp_name[100], temp_address[100];
        printf("\nData entry no: %d\n\n", x + 1);
        printf("Roll No :");
        scanf("%d", &stud[x].roll_no);
        printf("Name    :");
        scanf("%s", &temp_name);
        printf("Address :");
        scanf("%s", &temp_address);
        stud[x].name = (char *)malloc(strlen(temp_name) * sizeof(char)); //dynamic allocation
        strcpy(stud[x].name, temp_name);
        stud[x].address = (char *)malloc(strlen(temp_address) * sizeof(char)); //dynamic allocation
        strcpy(stud[x].address, temp_address);
    }
    printf("Printing Entered Data---------------------------------------------------------- \n\n\n");
    for (int x = 0; x < 10; x++)
    {
        printf("%d", x);
        printf("Roll Number : %d\n", stud[x].roll_no);
        printf("Name        : %s\n", stud[x].name);
        printf("Address     : %s\n", stud[x].address);
        printf("&Address  : %s\n\n",&stud[x].address);
    }
}
