#include<stdio.h>
int main()
{
    int fact=1,i,temp;
    scanf("%d",&temp);
    for(i=1;i<=temp;i++)
    {
        fact=fact*i;

    }
    printf("%d",fact);
}
