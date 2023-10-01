#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 20

int top=-1;
s[max];
void push(int n)
{
    if(top==max-1)
    {
        printf("Stack Overflow,cannot push element\n");
    }
    else
    {
        top=top+1;
        s[top]=n;

    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow,empty stack\n");
    }
    else
    {
      int p=s[top];
      printf("Popped element is %d",p);
      top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        printf("Stack is empty\n");
    else
    {
        for(int i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
    int opt,n;
    do{
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit");
        printf("\nEnter Your choice");
        scanf("%d", &opt);
        switch(opt)
        {
        case 1:
            printf("Enter an element to push:");
            scanf("%d", &n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("The elements of the stack are:\n");
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }while(1);
    return 0;
}
