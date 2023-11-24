#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void enQueue(int data);
void deQueue(void);
void display(void);
int items[SIZE];
int Front= -1;
int Rear=-1;
int main()
{
    deQueue(); //dequeue not possible on empty queue
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    enQueue(6); //enqueue not possible on full queue
    display();
    deQueue();
    display();
    return 0;
}

void enQueue(int data)
{
 if(Rear!=(SIZE-1))
 {
     if(Front==-1){  Front=0;  }
     Rear++;
     items[Rear]=data;
     printf("inserted -> %d\n",data);
 }
 else
 {
     printf("Queue is full\n");
 }
}
void deQueue(void)
{
    if(Front==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("Deleted: %d\n",items[Front]);
        Front++;
        if(Front>Rear)
        {
            Front=-1;
            Rear=-1;
        }
    }
}
void display(void)
{
    if(Front==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        int traverser=Front;

        while(traverser!=-1)
        {
            printf("%d\n",items[traverser]);
            traverser++;
            if(traverser>Rear)
            {
                traverser=-1;
            }
        }
    }
}



