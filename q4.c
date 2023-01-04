#include<stdio.h>
void main()
{
    char str1[]="blank space in the string";
    int len=strlen(str1);
    char str2[len];
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(str1[i]!=' ')
        {
            str2[j]=str1[i];
            j++;
        }
    }
    printf("before: ");
    printf("%s\n",str1);
    printf("after: ");
    printf("%s\n",str2);

}
