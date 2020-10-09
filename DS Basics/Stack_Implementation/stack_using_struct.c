#include <stdio.h>
#include <string.h>
void push(int);
void pop();
void view();
struct stack_node
{
    int data[10]; 
    int top ;
}stk;

int main()
{   stk.top=-1;
    int loop = 1;
    int temp, sw;
    while (loop == 1)
    {
        printf("Choose the following operation:-- \n1->Add element in stack\n2->POP element from stack\n3->View Stack\n4->Exit\n");
        scanf("%d", &sw);
        switch (sw)
        {
        case 1:
            printf("Enter element to push\n");
            scanf("%d", &temp);
            push(temp);
            break;
        case 2:
            pop();
            break;
        case 3:
            view();
            break;
        case 4:
            loop = 0;
            break;

        default:
            break;
        }
    }
}
void push(int num)
{
    if (stk.top == -1)
    {
        stk.top = 0;
        stk.data[stk.top] = num;
        printf("Stack Initialized\n");
    }
    else if (stk.top == 9)
    {
        printf("Stack Full\n");
    }
    else
    {
        stk.top++;
        stk.data[stk.top] = num;
        printf("%d has been added to Stack\n", num);
    }
}
void pop()
{
    if (stk.top == -1)
    {
        printf("Stack Uninitialized nothing to POP\n");
    }
    else
    {
        printf("Element POPED %d\n", stk.data[stk.top--]);
    }
}
void view()
{
    for (int x = 9; x >= 0; x--)
    {
        if (x == 9)
        {
            printf("---TOP---\n");
        }
        printf("|       |\n");
        printf("|   %d   |\n", stk.data[x]);
        printf("|       |\n");
        printf("---------\n");
        if (x == 0)
        {
            printf("-BOTTOM-\n");
        }
    }
}