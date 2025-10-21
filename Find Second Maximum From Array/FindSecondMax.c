#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max1,max2;
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
    }
    printf("%d\n%d",max1,max2);

    return 0;
}
