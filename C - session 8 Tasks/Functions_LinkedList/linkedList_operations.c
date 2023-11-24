#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList_operations.h"
void Push(int nodeData)
{
    node * tempNode=(node*)malloc(sizeof(node));
    if(NULL!=tempNode)
    {
        tempNode->data = nodeData;
        tempNode->next  = head;
        head=tempNode;
    }
    else{ }
}
void printLinkedList(void)
{
    node* traverse= head;
    while(traverse != NULL){
        printf("%d\t",traverse->data);
        traverse=traverse->next;
    }
    printf("\n");

}

void insersion(int pos, int data)
{
    node *traverse = head;
    node* tempnode=(node*)malloc(sizeof(node));
    tempnode->data = data;
    if(pos==1){
        tempnode->next=head;
        head=tempnode;
    }
    else
    {
        for (int i = 2; i < pos; i++)
        {
        if(traverse->next!=NULL)
        {
            traverse =traverse->next;
        }
        }
        tempnode->next=traverse->next;
        traverse->next=tempnode;
    }
}
void Append(int num)
{
    node *traverser=head;
    node* tempnode=(node*)malloc(sizeof(node));
    if(tempnode!=NULL)
    {
        tempnode->data=num;
        tempnode->next=NULL;
        while(traverser->next!=NULL)
        {
            traverser=traverser->next;
        }
        traverser->next=tempnode;
    }
    else{}
}
void DeleteNode(int position)
{
    node* NodeBefore=head;
    node* nextNode=NULL;
    if(position==1)
    {   node* firstnode=head;
        head=head->next;
        free(firstnode);
    }
    else
    {
        for(int i=2;i<position;i++)
        {
            NodeBefore=NodeBefore->next;
        }
        nextNode=NodeBefore->next;
        NodeBefore->next=nextNode->next;
        free(nextNode);
    }
}
void pop(void)
{
    node* firstNode=head;
    head=head->next;
    free(firstNode);
}
int ListElements(void)
{
    node* traverse = head;
    int num=0;
    while(traverse != NULL)
    {
        traverse=traverse->next;
        num++;
    }
    return num;
}
void ReverseList(void)
{
    int num = ListElements();
    node* traverser= head->next;
    for(int i=1;i<num;i++)
    {
        Push((traverser->data));
        traverser=traverser->next;
        DeleteNode(i+2);
    }
}

void reverseLinkedList(void)
{
    node* Prev=NULL;
    node* Current= head;
    node* Next=NULL;
    while(Current!=NULL)
    {
        Next = Current->next;
        Current->next=Prev;
        Prev=Current;
        Current=Next;
    }
    head= Prev;
}

void printRecursively(node *header)
{
    printf("%d\t",header->data);
    header=header->next;
    if(header!=NULL)
    {
        printRecursively(header);
    }
}
void printReverseRecursively(node *header)
{
    if(header==NULL){
        return;
    }
    printReverseRecursively(header->next);
    printf("%d\t",header->data);
}
void reverseListRecursively(node* header)
{
    if(header->next==NULL){
        head = header;
        return;
    }
    else
    {
        reverseListRecursively(header->next);
        node* Next =header->next;
        Next->next= header;
        header->next=NULL;


    }


}
