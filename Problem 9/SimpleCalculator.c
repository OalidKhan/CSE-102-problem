#include<stdio.h>
int main()
{
    float a,b;
    char operator;
    printf("Enter your value of a= ");
    scanf("%f",&a);
    printf("Enter your value of b= ");
    scanf("%f",&b);
    printf("Choose your operator(+, -, *, /, %%): ");
    scanf(" %c",&operator);

    switch (operator)
    {
    case '+':
        printf("%.2f + %.2f = %.2f",a,b,a+b);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f",a,b,a-b);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f",a,b,a*b);
        break;
    case '/':
        if (b==0)
            printf("Undefined");
        else
            printf("%.2f / %.2f = %.2f",a,b,a/b);
        break;
    case '%':
        {
        int x,y;
        x=a;
        y=b;
        printf("%d %% %d = %d",x,y,x%y);
        }
    break;
    default:
        printf("Operator is not valid");
    }
    return 0;
}
