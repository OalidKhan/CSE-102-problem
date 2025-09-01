#include<stdio.h>
float summation(float x,float y)
{
    float sum;
    sum = x + y;
    printf("Summation = %.2f",sum);
    return sum;
}
float substract(float x,float y)
{
    float sub;
    sub = x - y;
    printf("Substract = %.2f",sub);
    return sub;
}
float multiplication(float x,float y)
{
    float multi;
    multi = x * y;
    printf("Multiplication = %.2f",multi);
    return multi;
}
float division(float x,float y)
{
    float div;
    div = x / y;
    printf("Division = %.2f",div);
    return div;
}
int modulas(int x,int y)
{
    int mod;
    mod = x % y;
    printf("Modulas = %d",mod);
    return mod;
}
int main()
{
    float a,b;
    char c;
    printf("Enter your first number: ");
    scanf("%f",&a);
    printf("Enter your second number: ");
    scanf("%f",&b);
    printf("Enter any operator(+,-,*,/,%%): ");
    scanf(" %c",&c);
    switch (c)
    {
    case '+':
    {
        summation(a,b);
        break;
    }
    case '-':
    {
        substract(a,b);
        break;
    }
    case '*':
    {
        multiplication(a,b);
        break;
    }
    case '/':
    {
        division(a,b);
        break;
    }
    case '%':
    {
        modulas(a,b);
        break;
    }
    }

    return 0;
}
