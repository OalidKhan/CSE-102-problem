#include<stdio.h>
void scanArray(int ARR[],int N)
{
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&ARR[i]);
    }
}
void CopyArray(int Arr[],int ARr[],int N)
{
    for(int i=0 ; i<N ; i++)
    {
        ARr[i] = Arr[i];
    }
}
void PrintArray(int arR[],int N)
{
    for(int i=0 ; i<N ; i++)
    {
        printf("%d ",arR[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],ARR[n];
    scanArray(arr,n);
    CopyArray(arr,ARR,n);
    PrintArray(ARR,n);

    return 0;
}
