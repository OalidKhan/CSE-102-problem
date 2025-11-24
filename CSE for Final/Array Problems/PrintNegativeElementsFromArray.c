#include<stdio.h>
void scanArray(int ARR[],int N)
{
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&ARR[i]);
    }
}
void printArray(int Arr[],int N)
{
    for(int i=0 ; i<N ; i++)
    {
        if(Arr[i]<0)
        {
            printf("%d ",Arr[i]);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    scanArray(arr,n);
    printArray(arr,n);

    return 0;
}
