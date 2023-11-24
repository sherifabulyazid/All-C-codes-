#include <stdio.h>
#include <stdlib.h>
#define MAX 10
struct Stack{
int items[MAX];
int top;
};
typedef struct Stack st;
void createEmptyStack(st *s);
int IsFull(st *s);
int IsEmpty(st *s);
void push (int newItem,st*s);
void pop (st* s);
void printStack(st *s);
void printTopOfStack(st *s);


int main()
{
    st* ptrstack=(st*)malloc(sizeof(st));
    createEmptyStack(ptrstack);
    int option=0;
    int value=0;
    while(1)
    {
       printf("options:\n1- push\n2- pop\n3- print stack\n4- print last element\n5- Exit\nEnter Option: ");
       scanf(" %d",&option);
       switch(option)
       {
       case 1:
           printf("enter value: ");
           scanf(" %d",&value);
           push(value,ptrstack);
           break;
       case 2:
           pop(ptrstack);
           break;
       case 3:
            printStack(ptrstack);
            break;

       case 4:
           printTopOfStack(ptrstack);
           break;
       default:
            break;
       }
       if(option==5) break;
       printf("===========================================================\n");
    }
    free(ptrstack);
    return 0;
}

void createEmptyStack(st *s)
{
    s->top=-1;
}

int IsFull(st *s)
{
    if(s->top==MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int IsEmpty(st *s)
{
    if(s->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push (int newItem,st*s)
{
    if(IsFull(s))
    {
        printf("stack is full\n");
    }
    else
    {
        s->top++;
        s->items[s->top]=newItem;
    }
}

void pop (st* s)
{
    if(IsEmpty(s)){
        printf("Stack is empty\n");
    }
    else{
        printf("Item removed = %d\n",s->items[s->top]);
        s->top--;
    }
}

void printStack(st *s)
{
    for(int i=0;i<=s->top;i++)
    {
        printf("%d\t",s->items[i]);
    }
    printf("\n");
}
void printTopOfStack(st *s)
{
    printf("Top of stack = %d\n",s->items[s->top]);
}
