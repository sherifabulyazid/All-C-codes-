#include <stdio.h>
#include <stdlib.h>

void push(int num);
void print_linkedlist(void);
void insersion(int pos, int data);

typedef struct Node Node;
struct Node
{
    int value;
    Node *next;
};

Node *header = NULL;

int main()
{
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    insersion(1, 55);

    print_linkedlist();
    return 0;
}

void push(int num)
{
    Node *tempnode = (Node*)malloc(sizeof(Node));
    tempnode->value = num;
    tempnode->next = header;
    header = tempnode;
}

void print_linkedlist(void)
{
    Node *rev = header;
    while (rev != NULL)
    {
        printf("%d\n", rev->value);
        rev = rev->next;
    }
}
void insersion(int pos, int data)
{
    Node *rev = header;
    for (int i = 0; i < 5 - pos; i++)
    {
        rev = rev->next;
    }
    Node *node = malloc(sizeof(Node));
    node->value = data;
    node->next = rev->next;
    rev->next = node;
}
