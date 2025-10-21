#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N+1];
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int idx,val;
    scanf("%d %d",&idx,&val);
    for(int i=N ; i>=idx ; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[idx] = val;
    for(int i=0 ; i<=N ; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
