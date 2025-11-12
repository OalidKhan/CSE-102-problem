#include<stdio.h>
#include<string.h>
int main()
{
    char first[101],second[101];
    gets(first);
    int length=strlen(first),count=0,i=0,j=0;
    while(first[i]!='\0')
    {
        second[i] = first[length-1-i];
        i++;
    }
    while(second[j]!='\0')
    {
        if(first[j]!=second[j])
        {
            count++;
            break;
        }
        j++;
    }
    if(count==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }


    return 0;
}
