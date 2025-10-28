#include<stdio.h>
int main()
{
    int N;
    printf("Enter the size of the Array: ");
    scanf("%d",&N);
    int arr[N];
    printf("Enter elements: ");
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<N ; i++)
    {
        for(int j=i+1 ; j<N ; j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The sorted Array: ");
    for(int i=0 ; i<N ; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
