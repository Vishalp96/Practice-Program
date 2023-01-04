#include<stdio.h>
int main()
{
    char str[20];
    gets(str);

    int len=strlen(str);
    for(int i=0;i<=len;i++)
    {
    if(str[i]==' ')
    {
        str[i]='\n';
    }

    }
    printf("%s",str);
}
