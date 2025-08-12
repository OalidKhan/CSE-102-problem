#include<stdio.h>
#include<math.h>
int main()
{
    double R,Diameter,Circumference,Area;
    const double pi = 3.1416;

    printf("Enter your radius: ");
    scanf("%lf",&R);
    Diameter = 2 * R;
    Circumference = 2 * pi * R;
    Area = pi * R * R;
    printf("%.2lf\n%.2lf\n%.2lf",Diameter,Circumference,Area);

}

