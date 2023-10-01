#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
    };
struct Node *head=NULL;
void push(int n)
{
    struct Node *n1=malloc(sizeof(struct Node));
    n1->data=n;
    n1->next=head;
    head=n1;
}
void pop()
{
    struct Node *temp=head;
    if(head==NULL)
        printf("Stack is empty\n");
    else
    {
        printf("Popped element is %d\n", temp->data);
        head=head->next;
        free(temp);
    }
}
void display()
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\t", temp->data);
        temp=temp->next;
    }
}
int main()
{
    int len,data;
    printf("Enter length\n");
    scanf("%d", &len);
    for(int i=0;i<len;i++)
    {
        printf("\nEnter data:");
        scanf("%d", &data);
        push(data);
    }
    printf("Linked list\n");
    display();
    printf("\n");
    pop();
    printf("New linked list after pop\n");
    display();
    return 0;
}
