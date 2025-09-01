#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for (int i=1 ; i<=x ; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int N,result;
    printf("Enter any number: ");
    scanf("%d",&N);
    for (int r=0 ; r<=N ; r++)
    {
        for (int s=r ; s<=N ; s++)
        {
            printf(" ");
        }
        for (int c=0 ; c<=r ; c++)
        {
            result = (factorial(r)/(factorial(c)*factorial(r-c)));
            printf("%d ",result);
        }
        printf("\n");
    }

    return 0;
}
