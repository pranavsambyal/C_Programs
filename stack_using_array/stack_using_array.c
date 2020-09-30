#include <stdio.h>
struct stack
{
    int data[10];
    int top;

};
void push(struct stack,int);
void pop(struct stack);



int main()
{
    int loop = 1;int temp;
    struct stack stack1 ={.top=-1};
    while (loop == 1)
    {
        printf("Choose the following operation:-- \n1->Add element in stack\n2->POP element from stack\n3->Exit\n");
        scanf("%d",&temp);
        switch (temp)
        {
        case 1:
            printf("Enter element to push\n");
            scanf("%d",&temp);
            push(&stack1,temp);
            break;
        case 2:
            pop(&stack1);
            break;
        case 3:
            loop=0;
            break;

        default:
            break;
        }
    }
}
void push(struct stack stk,int num)
    {
        if (stk.top == -1)
        {
            stk.top++;
            stk.data[stk.top] = num;
            printf("Stack Initialized\n");
        }
        else if(stk.top == 9)
        { 
            printf("Stack Full\n");
        }
        else
        {
            stk.top++;
            stk.data[stk.top] = num;
            printf("%d has been added to stack",num);
        }
    }
void pop(struct stack stk)
    {
        if (stk.top == -1)
        {
            printf("Stack Uninitialized nothing to POP\n");
        }
        else
        {
            printf("Element POPED %d", stk.data[stk.top--]);
        }
    }