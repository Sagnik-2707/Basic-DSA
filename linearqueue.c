#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 20

int queue[max];
int rear=-1;
int front=-1;

void enqueue(int n)
{
    if(rear==max-1)
        printf("Queue full, Can't enqueue\n");
    else
    {
        if(front==-1)
            front=0;
        rear=rear+1;
        queue[rear]=n;
        printf("Enqueued %d\n", n);
    }
}
void dequeue()
{
    if(front==-1)
        printf("Empty Queue\n");
    else
    {
        int d=queue[front];
        printf("Dequeued %d\n", d);
        if(front==rear)
            front=rear=-1;
        else
            front=front+1;
    }

}
void display()
{
    if(front==-1)
    {
        printf("Queue is empty\n");
    }
    printf("Elements of queue are:\n");
    for(int i=front;i<=rear;i++)
    {
        printf("\t%d", queue[i]);
    }
    printf("\n");
}

int main()
{
    int choice,value;
    while(1)
    {
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        printf("Enter value to enqueue:");
        scanf("%d", &value);
        enqueue(value);
        break;
    case 2:
        dequeue();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
    default:
        printf("Invalid choice.Please select again\n");
    }
    }
    return 0;
}
