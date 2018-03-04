#include <stdio.h>
#include <string.h>

int main() {
    char s[1000],a[5]={'a','e','i','o','u'};
    int b[5]={0,0,0,0,0},i,j;
    scanf("%[^\n]s",s);
    
    //To convert string into lowercase
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i] = s[i] + 32;
        }
    }
    for(i=0;s[i]!='\0';++i)
    {
        if(s[i]=='a')
        {
            ++b[0];
        }
        if(s[i]=='e')
        {
            ++b[1];
        }
        if(s[i]=='i')
        {
            ++b[2];
        }
        if(s[i]=='o')
        {
            ++b[3];
        }
        if(s[i]=='u')
        {
            ++b[4];
        }
    }
    for(i=0;i<5;++i)
    {
        if(b[i]!=0)
        {
            printf("%c-->%d\n",a[i],b[i]);
        }
    }
    return 0;
}
