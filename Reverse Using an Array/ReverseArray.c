#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int s=0; s<N; s++)
    {
        scanf("%d", &A[s]);
    }
    for(int c=0; c<N/2; c++)
    {
        int temp = A[c];
        A[c] = A[N-1-c];
        A[N-1-c] = temp;
    }
    for(int p=0; p<N ; p++)
    {
        printf("%d ",A[p]);
    }
    return 0;
}
