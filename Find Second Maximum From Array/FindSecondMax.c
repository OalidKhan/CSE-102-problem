#include<stdio.h>
int main()
{
    int N,max1,max2;
    printf("Enter the size of Array: ");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the elements of Array: ");
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
    }
    else if(arr[1]>arr[0])
    {
        max1 = arr[1];
        max2 = arr[0];
    }
    for(int i=2 ; i<N ; i++)
    {
        if(arr[i]>max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]<max1 && arr[i]>max2)
        {
            max2 = arr[i];
        }
    }
    printf("Second largest number: %d",max2);
    return 0;
}
