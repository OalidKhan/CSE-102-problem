#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter Row and Column for the first matrix: ");
    scanf("%d %d",&r,&c);
    int arr[r][c],transpose[c][r];
    printf("Enter elements: \n");
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    for(int i=0 ; i<c ; i++)
    {
        for(int j=0 ; j<r ; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
