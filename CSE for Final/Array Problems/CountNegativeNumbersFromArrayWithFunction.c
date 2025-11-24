#include<stdio.h>
void scanArray(int ARR[],int N)
{
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&ARR[i]);
    }
}
int CountNegativeNumbers(int Arr[],int N)
{
    int Negative = 0;
    for(int i=0 ; i<N ; i++)
    {
        if(Arr[i]<0)
        {
            Negative++;
        }
    }
    return Negative;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    scanArray(arr,n);
    int NegativeNumber = CountNegativeNumbers(arr,n);
    printf("Total Negative numbers in the Array = %d",NegativeNumber);

    return 0;
}
