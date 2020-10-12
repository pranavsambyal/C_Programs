#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node *head = NULL;
struct node *last = NULL;
struct node
{
    int data;
    struct node *next;
};
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
void view()
{
    int i = 0;
    printf("\t\t\tPrinting LINKED LIST  [DATA][NEXT]---->");
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
    //system("cls");
    int ch, a = 1;
    printf("Popupating try array from data\n");
    data();
    view();
    while (a == 1)
    {
        printf("Choose the operation you want to perform on this Linked List:\n1:Delete 1st element\t\t\t\t\t");
        printf("2:Delete last element\n3:Delete middle element\t\t\t\t\t4:Delete Specific element\n");
        printf("5:View Linked List as of now\t\t\t\t6:Exit\n");
        scanf("%d", &ch);
        //system("cls");
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
            a = 0;
            printf("Exiting\n");
            break;
        }
        default:
        {
            printf("Error Wrong input");
        }
        }
    }
}