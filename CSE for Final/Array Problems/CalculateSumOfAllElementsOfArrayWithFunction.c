#include<stdio.h>
void scanArray(int ARR[],int N)
{
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&ARR[i]);
    }
}
int CalculateSum(int Arr[],int N)
{
    int sum=0;
    for(int i=0 ; i<N ; i++)
    {
        sum+=Arr[i];
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    scanArray(arr,n);
    int SUM = CalculateSum(arr,n);
    printf("Sum of all elements in Array = %d",SUM);

    return 0;
}
