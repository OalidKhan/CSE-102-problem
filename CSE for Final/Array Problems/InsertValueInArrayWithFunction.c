#include<stdio.h>
void scanArray(int ARR[],int N)
{
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&ARR[i]);
    }
}
void InsertValue(int Arr[],int N,int val,int pos)
{
    for(int i=N ; i>pos-1 ; i--)
    {
        Arr[i]=Arr[i-1];
    }
    Arr[pos-1]=val;
}
void PrintingArray(int ArR[],int N)
{
    for(int i=0 ; i<=N ; i++)
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
    int value,position;
    scanf("%d %d",&value,&position);
    InsertValue(arr,n,value,position);
    PrintingArray(arr,n);


    return 0;
}
