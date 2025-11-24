#include<stdio.h>
void scanArray(int ARR[],int N)
{
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&ARR[i]);
    }
}
void printArray(int Arr[],int N,int I)
{
    if(I<N)
    {
        printf("%d ",Arr[I]);
        I++;
        printArray(Arr,N,I);
    }
}
int main()
{
    int n,i=0;
    scanf("%d",&n);
    int arr[n];
    scanArray(arr,n);
    printArray(arr,n,i);

    return 0;
}
