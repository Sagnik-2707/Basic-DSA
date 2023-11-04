#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int a[MAX];
void quickSort(int a[], int lb, int ub);
int partition(int a[], int lb, int ub);
int main()
{
    int n;
    printf("Enter the number of array elements:");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    int lb=0;
    int ub=n-1;
    quickSort(a,lb,ub);
    printf("The sorted array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
void quickSort(int a[], int lb, int ub)
{
    int loc;
    if(lb<ub)
    {
      loc=partition(a,lb,ub);
      quickSort(a,lb,loc-1);
      quickSort(a,loc+1,ub);
    }
}
int partition(int a[], int lb, int ub)
{
    int pivot,start,end,t;
    pivot=a[lb];
    start=lb;
    end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            t=a[start];
            a[start]=a[end];
            a[end]=t;
        }
    }
    t=a[lb];
    a[lb]=a[end];
    a[end]=t;
    return end;
}
