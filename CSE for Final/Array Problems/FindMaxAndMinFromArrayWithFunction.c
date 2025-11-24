#include<stdio.h>
void scanArray(int ARR[],int N)
{
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&ARR[i]);
    }
}
int FindMax(int ARR[],int N)
{
    int max=ARR[0];
    for(int i=1 ; i<N ; i++)
    {
        if(ARR[i]>max)
        {
            max = ARR[i];
        }
    }
    return max;
}
int FindMin(int ARR[],int N)
{
    int min=ARR[0];
    for(int i=1 ; i<N ; i++)
    {
        if(ARR[i]<min)
        {
            min = ARR[i];
        }
    }
    return min;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    scanArray(arr,n);
    int MAX = FindMax(arr,n);
    int MIN = FindMin(arr,n);
    printf("Max value from the Array = %d\nMin value from the Array = %d",MAX,MIN);

    return 0;
}
