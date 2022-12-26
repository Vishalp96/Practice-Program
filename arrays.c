#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(int i=1;i<5;i++)
    {
        if (a[0] < a[i])
        {
            a[0]=a[i];
        }
    }
    printf("%d",a[0]);


}
