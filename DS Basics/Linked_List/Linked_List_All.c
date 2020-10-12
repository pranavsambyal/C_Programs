#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<windows.h>
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
        mid = (total + 1) / 2;
    return mid;
}
int midval_d()
{
    int total;
    total = totval();
    int mid;
    if (total % 2 == 0)
    {
        mid = total / 2;
        printf("The list have even no of elements choose the element you want to delete:\n-->%d\t-->%d\t :", mid, mid + 1);
        scanf("%d", &mid);
    }
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
void data()
{
    head = last = NULL;
    int x;
    for (x = 1; x <= 10; x++)
    {
        int d = x;
        struct node *e = (struct node *)malloc(sizeof(struct node));
        if (head == NULL)
        {
            e->data = d;
            e->next = NULL;
            head = e;
            last = e;
        }
        else
        {
            e->data = d;
            e->next = NULL;
            last->next = e;
            last = e;
        }
    }
}
void ins_at_loc(int loc)
{
    int data = getdata();
    struct node *e = head;
    struct node *en = (struct node *)malloc(sizeof(struct node));
    if (loc == midval())
        printf("Inserting New Node at MIDDLE\n");
    else
        printf("Inserting New Node at %d position\n", loc);
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
    while (element != NULL)
    {
        if (i != 0)
        {
            if (element->next != NULL)
            {
                element = element->next;
            }
            else
            {
                break;
            }
        }
        if (i % 3 == 0)
        {
            printf("\n");
        }
        if (element->next == NULL)
            printf("[%d][%p]", element->data, element->next);
        else
            printf("[%d][%p]---->", element->data, element->next);

        i++;
    }
    printf("\n");
}
void del_at_start()
{
    struct node *e = head;
    {
        if (head != NULL)
        {
            head = head->next;
            printf("Deleting %d at location %p\n ", e->data, e);
            free(e);
            view();
        }
        else
        {
            printf("Linked List Is Empty\n");
            exit(0);
        }
    }
}
void del_last()
{
    struct node *e = head;
    struct node *p = head;
    while (e->next != NULL)
    {
        p = e;
        e = e->next;
    }
    p->next = NULL;
    if (p == e)
    {
        free(e);
        head = NULL;
        printf("Linked list is Empty\n");
    }
    else
    {
        free(e);
        view();
    }
}
void del_loc(int l)
{
    struct node *e = head;
    struct node *p = head->next;
    int i = 1;
    if (l > 1)
    {
        while (i < l)
        {

            p = e;
            e = e->next;
            i++;
        }
        p->next = e->next;
        free(e);
        view();
    }
    else if (l == 1)
    {
        del_at_start();
    }
    else
    {
        printf("Error Input Correct Index");
    }
}

int main()
{
    int mm, loop = 1;
    while (loop == 1)
    {
    main_menu:
        printf("Choose the type of function you want to perform\n1:Insertion\t\t\t\t\t\t\t2:Deletion\n");
        printf("3:Initilizing linked list with test data\t\t\t4:Exit\n");
        scanf("%d", &mm);
        switch (mm)
        {

        case 1:
        {

            int ch, a = 1;
            system("cls");
            while (a == 1)
            {
                printf("Choose the type of insertion you want to use:\n1:Insertion at START\t\t\t\t2:Insertion at MIDDLE\n");
                printf("3:Insertion at END  \t\t\t\t4:Insertion at specified location\n5:View LINKED LIST data with next\t\t");
                printf("6:Back\n7:Exit\n");

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
                    goto main_menu;
                    break;
                }
                case 7:
                {
                    a = 0;
                    printf("Exiting Initilising Mode\n");
                    sleep(1);
                    goto ex;
                    break;
                }
                default:
                {
                    printf("Invalid input");
                }
                }
            }
            break;
        }
        case 2:
        {
            system("cls");
            int ch, a = 1;
            view();
            while (a == 1)
            {
                printf("Choose the operation you want to perform on this Linked List:\n1:Delete 1st element\t\t\t\t\t");
                printf("2:Delete last element\n3:Delete middle element\t\t\t\t\t4:Delete Specific element\n");
                printf("5:View Linked List as of now\t\t\t\t6:Back\n7:Exit\n");
                scanf("%d", &ch);
                switch (ch)
                {
                case 1:
                {
                    del_at_start();
                    break;
                }
                case 2:
                {
                    del_last();
                    break;
                }
                case 3:
                {
                    int mid = midval_d();
                    del_loc(mid);
                    break;
                }
                case 4:
                {
                    int loc;
                    printf("Enter the Index of term you want to Delete\n");
                    scanf("%d", &loc);
                    del_loc(loc);
                    break;
                }
                case 5:
                {
                    view();
                    break;
                }
                case 6:
                {
                    goto main_menu;
                    break;
                }
                case 7:
                {
                    a = 0;
                    printf("Exiting Deletion Mode\n");
                    sleep(1);
                    goto ex;
                    break;
                }
                default:
                {
                    printf("Error Wrong input");
                }
                }
            }
            break;
        }
        case 3:
        {
            system("cls");
            printf("Popupating try array from data\n");
            int t = 0;
            data();
            while (t<40)
            {
                printf(".");
                usleep(80000);
                t++;
            }
            printf("\n");
            view();
            break;
        }
        case 4:
        {
            ex:
            loop = 0;
            printf("Exiting Program");
            break;
        }
        default:
            printf("Error Wrong Input");
        }
    }
}