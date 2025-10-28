#include<stdio.h>
int main()
{
    int N,n;
    printf("Enter the size of the first Array: ");
    scanf("%d",&N);
    int ARR[N];
    printf("Enter elements: ");
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&ARR[i]);
    }
    printf("Enter the size of the second Array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int Arr[N+n],j=0;
    for(int i=0 ; i<N+n ; i++)
    {
        if(i<N)
        {
            Arr[i] = ARR[i];
        }
        else
        {
            Arr[i] = arr[j];
            j++;
        }
    }
    for(int i=0 ; i<N+n ; i++)
    {
        for(int j=i+1 ; j<N+n ; j++)
        {
            if(Arr[i]>Arr[j])
            {
                int temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
    }
    printf("The sorted Array: ");
    for(int i=0 ; i<N+n ; i++)
    {
        printf("%d ",Arr[i]);
    }

    return 0;
}
