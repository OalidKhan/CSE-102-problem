#include<stdio.h>
int main()
{
    int N,n,found=0;
    printf("Enter the size of the Array: ");
    scanf("%d",&N);
    int arr[N];
    printf("Enter elements: ");
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value you want from the Array: ");
    scanf("%d",&n);
    for(int i=0 ; i<N ; i++)
    {
        if(arr[i]==n)
        {
            found = i+1;
            break;
        }
    }
    if(found==0)
    {
        printf("%d is not in the Array",n);
    }
    else
    {
        printf("%d is in %d position in the Array",n,found);
    }

    return 0;
}
