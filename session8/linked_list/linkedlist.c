#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node node;
struct node
{
    int data;
    node *next;
};

void Push(int nodeData);           // add node at the beginning of list
void Append(int num);              // add node at the end of list
void printLinkedList(void);        // print linked list data form the beginning
void insersion(int pos, int data); // insert node between two nodes
void DeleteNode(int position);     // delete Node
void pop(void);                    // delete the first node (last pushed node)
void ReverseList(void);
int ListElements(void);

node *head = NULL;

int main()
{
    Push(5);
    Push(6);
    Push(7);
    Push(8);
    Push(9);
    // pop();
    // insersion(2,3);
    // Append(12);
    // Append(24);
    // DeleteNode(5);
    printf("number of elements = %d\n", ListElements());
    printLinkedList();
    ReverseList();
    printLinkedList();

    return 0;
}
void Push(int nodeData)
{
    node *tempNode = (node *)malloc(sizeof(node));
    if (NULL != tempNode)
    {
        tempNode->data = nodeData;
        tempNode->next = head;
        head = tempNode;
    }
}
void printLinkedList(void)
{
    node *traverse = head;
    while (traverse != NULL)
    {
        printf("%d\t", traverse->data);
        traverse = traverse->next;
    }
    printf("\n");
}

void insersion(int pos, int data)
{
    node *traverse = head;
    node *tempnode = (node *)malloc(sizeof(node));
    tempnode->data = data;
    if (pos == 1)
    {
        tempnode->next = head;
        head = tempnode;
    }
    else
    {
        for (int i = 2; i < pos; i++)
        {
            if (traverse->next != NULL)
            {
                traverse = traverse->next;
            }
        }
        tempnode->next = traverse->next;
        traverse->next = tempnode;
    }
}
void Append(int num)
{
    node *traverser = head;
    node *tempnode = (node *)malloc(sizeof(node));
    if (tempnode != NULL)
    {
        tempnode->data = num;
        tempnode->next = NULL;
        while (traverser->next != NULL)
        {
            traverser = traverser->next;
        }
        traverser->next = tempnode;
    }
    else
    {
    }
}
void DeleteNode(int position)
{
    node *NodeBefore = head;
    node *NodeAfter = NULL;
    node *CurrentNode = NULL;
    if (position == 1)
    {
        node *firstnode = head;
        head = head->next;
        free(firstnode);
    }
    else
    {
        for (int i = 2; i < position; i++)
        {
            NodeBefore = NodeBefore->next;
        }
        CurrentNode = NodeBefore->next;
        NodeAfter = CurrentNode->next;
        NodeBefore->next = NodeAfter;
        free(CurrentNode);
    }
}
void pop(void)
{
    node *firstNode = head;
    head = head->next;
    free(firstNode);
}
int ListElements(void)
{
    node *traverse = head;
    int num = 0;
    while (traverse != NULL)
    {
        traverse = traverse->next;
        num++;
    }
    return num;
}
void ReverseList(void)
{
    int num = ListElements();
    node *temp1 = head;
    node *temp2 = head;
}
