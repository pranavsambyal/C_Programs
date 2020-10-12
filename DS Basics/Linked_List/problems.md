## In linked_list_del
''' C
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
int data;
struct node *next;
};
struct node *head = NULL;
struct node *last = NULL;
int midval()
{
int total = totval();
int mid;
if (total % 2 == 0)
mid = (total / 2) + 1;
else
mid = (total + 1) / 2;
return mid;
}
int totval()
{
int i = 0;
struct node *element = head;
while (element->next != NULL)
{
i++;
element = element->next;
}
return i + 1;
}
void data(int d)
{
struct node _e = (struct node _)malloc(sizeof(struct node));
if (head == NULL)
{
e->data = d;
e->next = NULL;
head = e;
printf("NULL\n");
}
else
{
e->data = d;
e->next = NULL;
last->next = e;
last = e;
printf("data\n");
}
}
void view()
{
int i = 0;
printf("Printing LINKED LIST\n");
struct node \*element = head;
while (element->next != NULL)
{
if (i != 0)
{
element = element->next;
}
if (i % 3 == 0)
{
printf("\n");
}
if (element->next == NULL)
printf("[%d][%d]", element->data, element->next);
else
printf("[%d][%d]---->", element->data, element->next);

        i++;
    }
    printf("\n");

}

int main()
{
int ch, a = 1;
printf("Popupating try array from data\n");
for (int x = 0; x < 10; x++)
{
data(x);
printf("Loaded %d\n", x);
printf("d\n");
}
view();
system("cls");
}
'''

## Error

'''Linked_List_Deletion.c: In function 'midval':
Linked_List_Deletion.c:13:17: warning: implicit declaration of function 'totval' [-Wimplicit-function-declaration]
int total = totval();
^
Popupating try array from data
NULL
Loaded 0
d'''
