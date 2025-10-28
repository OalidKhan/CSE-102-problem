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
    int result[r1][c2],sum=0;
    if(c1!=r2)
    {
        printf("The matrix cannot be multiply !!!!");
    }
    else
    {
        for(int i=0 ; i<r1 ; i++)
        {
            for(int j=0 ; j<c2 ; j++)
            {
                for(int k=0 ; k<c1 ; k++)
                {
                    sum = sum + arr[i][k] * Arr[k][j];
                }
                result[i][j] = sum;
                sum = 0;
            }
        }
        printf("New Matrix: \n");
        for(int i=0 ; i<r1 ; i++)
        {
            for(int j=0 ; j<c2 ; j++)
            {
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
