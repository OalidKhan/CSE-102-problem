n#include<stdio.h>
int main()
{
    double P,T,R,SI;
    printf("Enter Principle: ");
    scanf("%lf",&P);
    printf("Enter Time: ");
    scanf("%lf",&T);
    printf("Enter Rate: ");
    scanf("%lf",&R);
    SI = (P*T*R)/100;
    printf("Your Simple Interest: %.2lf",SI);
    return 0;
}
