#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack{
    int size;
    int top;
    char *arr;
};
void push(struct stack *ptr,int n)
{
    if(ptr->top==ptr->size-1)
        printf("Stack Overflow\n");
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=n;
    }
}
int pop(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        int p=ptr->arr[ptr->top];
        ptr->top--;
        return p;
    }
}
int *evaluatepostfix(char *expression)
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=20;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    int i,result,operand1,operand2;
    for(i=0;expression[i]!='\0';i++)
    {
        if(isdigit(expression[i]))
        {
            push(sp,expression[i]-'0');
        }
        else
        {
            operand2=pop(sp);
            operand1=pop(sp);
            switch(expression[i])
            {
            case '+':
                result=operand1+operand2;
                break;
            case '-':
                result=operand1-operand2;
                break;
            case '*':
                result=operand1*operand2;
                break;
            case '/':
                result=operand1/operand2;
                break;
            default:
                printf("Invalid operator!\n");
                exit(1);

            }
            push(sp,result);

        }
    }
    int r=pop(sp);
    return r;
}
int main()
{
    char e[50];
    printf("Enter a postfix expression\n");
    scanf("%s", e);
    char *expression=e;
    printf("Result is:%d", evaluatepostfix(expression));
    return 0;
}
