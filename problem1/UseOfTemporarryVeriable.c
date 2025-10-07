#include <stdio.h>

int main() {
    int A,B,TEMP;
    printf("Enter your first number: ");
    scanf("%d",&A);
    printf("Enter your secound value: ");
    scanf("%d",&B);
    TEMP = A;
    A = B;
    B = TEMP;
    printf("A = %d\nB = %d\n",A,B);

    return 0;
}
