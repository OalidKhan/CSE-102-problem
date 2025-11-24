#include<stdio.h>
void scanArray(int ARR[],int N)
{
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&ARR[i]);
    }
}
int CountOdd(int Arr[],int N)
{
    int ODD=0;
    for(int i=0 ; i<N ; i++)
    {
        if(Arr[i]%2!=0)
        {
            ODD++;
        }
    }
    return ODD;
}
int CountEven(int Arr[],int N)
{
    int EVEN=0;
    for(int i=0 ; i<N ; i++)
    {
        if(Arr[i]%2==0)
        {
            EVEN++;
        }
    }
    return EVEN;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    scanArray(arr,n);
    int Odd = CountOdd(arr,n);
    int Even = CountEven(arr,n);
    printf("ODD numbers in the Array = %d\nEVEN numbers in the Array = %d",Odd,Even);

    return 0;
}
