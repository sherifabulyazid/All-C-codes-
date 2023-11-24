#ifndef _LINKEDLIST_OPERATIONS_
#define _LINKEDLIST_OPERATIONS_

typedef struct node node;
struct node
{
    int data;
    node *next;
};

void Push(int nodeData);            //add node at the beginning of list
void Append(int num);               //add node at the end of list
void printLinkedList(void);         // print linked list data form the beginning
void insersion(int pos, int data);  // insert node between two nodes
void DeleteNode(int position);      //delete Node
void pop (void);                    //delete the first node (last pushed node)
void ReverseList(void);             // Reverse linked list method 1
void reverseLinkedList(void);       // Reverse linked List method 2
int ListElements(void);             // returns the number of elements in linked list
extern node* head;

#endif // _LINKEDLIST_OPERATIONS_

