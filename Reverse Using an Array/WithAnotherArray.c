#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr1[N],arr2[N];
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0 ; i<N ; i++)
    {
        arr2[i] = arr1[i];
    }
    int j=N-1;
    for(int i=0 ; i<N ; i++)
    {
        arr1[i] = arr2[j];
        j--;
    }
    for(int i=0 ; i<N ; i++)
    {
        printf("%d ",arr1[i]);
    }

    return 0;
}
