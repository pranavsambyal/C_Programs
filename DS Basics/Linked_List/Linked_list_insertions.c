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
int getdata()
{
    int data;
    printf("Enter data in New Node\n");
    scanf("%d", &data);
    return data;
}
void ins_at_start()
{
    int data = getdata();
    struct node *e = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Initilizind new LINKED LIST\n");
        e->data = data;
        head = e;
        last = e;
        e->next = NULL;
    }
    else
    {
        printf("Adding New Node at START\n");
        e->data = data;
        e->next = head;
        head = e;
    }
}
void ins_at_end()
{
    int data = getdata();
    struct node *e = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Initilizind new LINKED LIST\n");
        e->data = data;
        head = e;
        last = e;
        e->next = NULL;
    }
    else
    {
        printf("Adding New Node at END\n");
        e->data = data;
        e->next = NULL;
        last->next = e;
        last = e;
    }
}
int midval()
{
    int total = totval();
    int mid;
    if (total % 2 == 0)
        mid = (total / 2) + 1;
    else
        mid =(total + 1) / 2;
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
void ins_at_loc(int loc)
{
    int data = getdata();
    struct node *e = head;
    struct node *en = (struct node *)malloc(sizeof(struct node));
    if (loc == midval())
        printf("Inserting New Node at MIDDLE\n");
    else
        printf("Inserting New Node at %d position\n",loc);
    int a = 1;
    while (a < loc - 1)
    {
        e = e->next;
        a++;
    }
    en->data = data;
    en->next = e->next;
    e->next = en;
}
void view()
{
    int i = 0;
    printf("Printing LINKED LIST\n");
    struct node *element = head;
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
    system("cls");
    while (a == 1)
    {
        printf("Choose the type of insertion you want to use:\n1:Insertion at START\t\t\t\t2:Insertion at MIDDLE\n");
        printf("3:Insertion at END  \t\t\t\t4:Insertion at specified location\n5:View LINKED LIST data with next\t\t");
        printf("6:Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            ins_at_start();
            break;
        }

        case 2:
        {
            int mid = midval();
            printf("mid%dtot%d", mid, totval());
            if (totval() % 2 == 1)
            {
                printf("ERROR Odd number of elemnets\n\nDecide middle term\n%d\t\tOR\t\t%d", mid, mid + 1);
                scanf("%d", &mid);
            }
            ins_at_loc(mid);
            break;
        }
        case 3:
        {
            ins_at_end();
            break;
        }

        case 4:
        {
            printf("Enter location at which you want the New Node to be added\n");
            int loc;
            scanf("%d", &loc);
            ins_at_loc(loc);
            break;
        }
        case 5:
        {
            view();
            break;
        }
        case 6:
        {
            a = 0;
            break;
        }
        default:
        {
            printf("Invalid input");
        }
        }
    }
}