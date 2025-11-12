#include<stdio.h>
int main()
{
    char S[100];
    fgets(S,100,stdin);
    int length=0,count1[26]={0};
    while(S[length]!='\n')
    {
        length++;
    }
    for(int i='a',I='A',c=0 ; i<='z',I<='Z' ; i++,I++,c++)
    {
        for(int j=0 ; j<length ; j++)
        {
            if(S[j]==i || S[j]==I)
            {
                count1[c]++;
            }
        }

    }
    for(int i=0,j='a' ; i<26 ; i++,j++)
    {
        if(count1[i]>0)
        {
            printf("'%c' = %d\n",j,count1[i]);
        }
    }

    return 0;
}
