#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList_operations.h"

node* head = NULL;
int main()
{
    Push(5);
    Push(6);
    Push(7);
    Push(8);
    Push(9);
    pop();
    insersion(2,3);
    Append(12);
    DeleteNode(5);
    printf("number of elements = %d\n",ListElements());
    printRecursively(head);
    //printLinkedList();
    //ReverseList();
    printf("\n");
    reverseListRecursively(head);
    //printReverseRecursively(head);
    //reverseLinkedList();
    printLinkedList();

    return 0;
}



