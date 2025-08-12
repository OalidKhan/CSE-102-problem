#include<stdio.h>
int main()
{
    int YEAR;
    printf("Enter your year: ");
    scanf("%d",&YEAR);
    if (YEAR%400==0 || YEAR%100==0 || YEAR%4==0)
        printf("%d is a Leap Year",YEAR);
    else
        printf("%d is not a Leap Year",YEAR);
    return 0;
}
