#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("Enter Row and Column for the first matrix: ");
    scanf("%d %d",&r1,&c1);
    int arr[r1][c1];
    printf("Enter elements: \n");
    for(int i=0 ; i<r1 ; i++)
    {
        for(int j=0 ; j<c1 ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter Row and Column for the second matrix: ");
    scanf("%d %d",&r2,&c2);
    int Arr[r2][c2];
    printf("Enter elements: \n");
    for(int i=0 ; i<r2 ; i++)
    {
        for(int j=0 ; j<c2 ; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }
    if(r1!=r2 || c1!=c2)
    {
        printf("It is not possible to subtract this two matrix !!!!");
    }
    else
    {
        int r=r1,c=c1;
        int ARR[r][c];
        for(int i=0 ; i<r ; i++)
        {
            for(int j=0 ; j<c ; j++)
            {
                ARR[i][j] = (arr[i][j] - Arr[i][j]);
            }
        }
        printf("New Matrix: \n");
        for(int i=0 ; i<r ; i++)
        {
            for(int j=0 ; j<c ; j++)
            {
                printf("%d ",ARR[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
