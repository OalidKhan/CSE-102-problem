#include<stdio.h>
#define size 100
int main()
{
    char String[size];
    printf("Enter any string: ");
    gets(String);
    int i=0;
    while(String[i]!='\0')
    {
        if(String[i]>='a' && String[i]<='z')
        {
            String[i] = String[i]-32;
        }
        i++;
    }
    printf("Uppercase string: %s",String);
    return 0;
}
