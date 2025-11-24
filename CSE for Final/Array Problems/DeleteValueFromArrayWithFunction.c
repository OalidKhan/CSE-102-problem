#include<stdio.h>
void scanArray(int ARR[],int N)
{
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&ARR[i]);
    }
}
void DeleteValue(int Arr[],int N,int pos)
{
    for(int i=pos-1 ; i<N ; i++)
    {
        Arr[i]=Arr[i+1];
    }
}
void PrintingArray(int ArR[],int N)
{
    for(int i=0 ; i<N-1 ; i++)
    {
        printf("%d ",ArR[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    scanArray(arr,n);
    int position;
    scanf("%d",&position);
    DeleteValue(arr,n,position);
    PrintingArray(arr,n);


    return 0;
}
