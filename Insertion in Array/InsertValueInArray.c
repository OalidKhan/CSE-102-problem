#include<stdio.h>
int main()
{
    int N,idx,val;
    printf("Enter the size of Array: ");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the elements of Array: ");
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Position and Value: ");
    scanf("%d %d",&idx,&val);
    if(idx<0 || idx>N+1)
    {
        printf("Invalid Position !!!");
    }
    else
    {
        for(int i=N ; i>idx-1 ; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[idx-1] = val;
        N++;
    }
    printf("New Array: ");
    for(int i=0 ; i<N ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
