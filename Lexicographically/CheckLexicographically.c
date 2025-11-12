#include<stdio.h>
int compare(char str1[],char str2[])
{
    int i=0;
    while(str1[i]!='\0' && str2[i]!='\0' && str1[i]==str2[i])
    {
        i++;
    }
    return str1[i]-str2[i];
}
int main()
{
    int string1[100],string2[100];
    printf("Enter first string: ");
    gets(string1);
    printf("Enter second string: ");
    gets(string2);
    int check=compare(string1,string2);
    if(check==0)
    {
        printf("Both string is Lexicographically equal\n");
    }
    else if(check<0)
    {
        printf("First string is Lexicographically smaller than second\n");
    }
    else
    {
        printf("Second string is Lexicographically smaller than first\n");
    }

    return 0;
}
