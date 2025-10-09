#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter your temperature in C= ");
    scanf("%f",&C);
    F = (C*9 + 160)/5 ;
    printf("Your temperature in F= %.2f",F);
    return 0;
}
