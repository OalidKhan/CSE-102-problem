#include<stdio.h>
int main()
{
    int r,c,count=0;
    printf("Enter Row and Column for the matrix: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
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
            if(i==j)
            {
                if(arr[i][j]!=1)
                {
                   count++;
                   break;
                }
            }
            else
                {
                    if(arr[i][j]!=0)
                    {
                        count++;
                        break;
                    }
                }
        }
        if(count==1)
        {
            break;
        }
    }
    if(count==0)
    {
        printf("The given matrix is Identity Matrix.");
    }
    else
    {
        printf("The given matrix is not Identity Matrix.");
    }

    return 0;
}
