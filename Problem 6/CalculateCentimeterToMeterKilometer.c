#include<stdio.h>
int main()
{
    double centimeter,meter,kilometer;
    printf("Enter your value in centimeter: ");
    scanf("%lf",&centimeter);
    meter = centimeter/100;
    kilometer = centimeter/100000;
    printf("Yours value in meter: %.2lf\n",meter);
    printf("Yours value in kilometer: %.2lf",kilometer);
    return 0;
}
