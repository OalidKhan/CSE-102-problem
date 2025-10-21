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
    int idx;
    scanf("%d",&idx);
    for(int i=idx ; i<N ; i++)
    {
        arr[i] = arr[i+1];
    }
    //arr[idx] = val;
    for(int i=0 ; i<N-1 ; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
