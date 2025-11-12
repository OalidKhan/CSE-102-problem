#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    gets(string);
    int length = strlen(string);
    int i=0,j=length-1;
    while(i != length/2)
    {
        int temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        i++;
        j--;
    }
    printf("%s",string);
    return 0;
}
