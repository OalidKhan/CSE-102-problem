#include<stdio.h>
#include<string.h>
int main()
{
    char first[101];
    gets(first);
    int length=strlen(first);
    int j=length-1;
    int count=0,i=0;
    while(i<=j)
    {
        if(first[i]!=first[j])
        {
            count++;
            break;
        }
        i++;
        j--;
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
