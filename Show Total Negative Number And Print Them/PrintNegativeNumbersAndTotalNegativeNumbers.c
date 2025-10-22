#include<stdio.h>
int main()
{
    int N,count=0;
    printf("Enter the size of Array: ");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the elements of Array: ");
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Negative Numbers: ");
    for(int i=0 ; i<N ; i++)
    {
        if(arr[i]<0)
        {
            count++;
            printf("%d ",arr[i]);
        }
    }
    printf("\nTotal negative numbers: %d",count);


    return 0;
}
