#include<stdio.h>
void scanArray(int ARR[],int N)
{
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&ARR[i]);
    }
}
int FindSecondMax(int Arr[],int N)
{
    int Max1,Max2;
    if(Arr[0]>Arr[1])
    {
        Max1 = Arr[0];
        Max2 = Arr[1];
    }
    else
    {
        Max2 = Arr[0];
        Max1 = Arr[1];
    }
    for(int i=2 ; i<N ; i++)
    {
        if(Arr[i]>Max1)
        {
            Max2 = Max1;
            Max1 = Arr[i];
        }
        else if(Arr[i]<Max1 && Arr[i]>Max2)
        {
            Max2 = Arr[i];
        }
    }
    return Max2;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    scanArray(arr,n);
    int SecondMax = FindSecondMax(arr,n);
    printf("Second Largest number in the Array = %d",SecondMax);

    return 0;
}
