#include<stdio.h>
int main()
{
    int N;
    printf("Enter your value in days: ");
    scanf("%d",&N);
    printf("%d years\n",N/365);
    printf("%d weeks\n",(N%365)/7);
    printf("%d days",(N%365)%7);

    return 0;
}

