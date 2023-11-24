#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void Push(struct node **ptrhead);
struct node* head = NULL;

int main()
{
    Push(&head);
    Push(&head);
    Push(&head);
    return 0;
}
void Push(struct node **ptrhead)
{

    struct node *tempnode=(struct node*)malloc(sizeof(struct node));

    if(NULL != tempnode)
    {
        printf("enter node data:");
        scanf(" %d", &tempnode->data);
        if(NULL==*ptrhead) //list is empty
        {
            tempnode->next=NULL;
            *ptrhead=tempnode;
        }
        else
        {
            tempnode=*ptrhead;
            *ptrhead=tempnode;
        }
    }
    else{}

}
