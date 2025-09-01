#include<stdio.h>
int ReverseNumber(int x)
{
    int remainder,reverse=0;
    while (x!=0)
    {
        remainder = x % 10;
        reverse = (reverse * 10) + remainder;
        x = x / 10;
    }
    return reverse;
}
int main()
{
    int N,reversenumber;
    printf("Enter any number: ");
    scanf("%d",&N);
    reversenumber = ReverseNumber(N);
    printf("%d",reversenumber);
    return 0;
}
