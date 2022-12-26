#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]>a[1]&&a[0]>a[2]&&a[0]>a[3]&&a[0]>a[4]&&a[0]>a[5])
    {
        printf("the largest num is : %d",a[0]);
    }
    if(a[1]>a[0]&&a[1]>a[2]&&a[1]>a[3]&&a[1]>a[4]&&a[1]>a[5])
    {
        printf("the largest num is : %d",a[1]);
    }
    if(a[2]>a[0]&&a[2]>a[1]&&a[2]>a[3]&&a[2]>a[4]&&a[2]>a[5])
    {
        printf("the largest num is : %d",a[2]);
    }
    if(a[3]>a[0]&&a[3]>a[1]&&a[3]>a[2]&&a[3]>a[4]&&a[3]>a[5])
    {
        printf("the largest num is : %d",a[3]);
    }
    if(a[4]>a[0]&&a[4]>a[1]&&a[4]>a[2]&&a[4]>a[3]&&a[4]>a[5])
    {
        printf("the largest num is : %d",a[4]);
    }
    if(a[5]>a[0]&&a[5]>a[1]&&a[5]>a[2]&&a[5]>a[3]&&a[5]>a[4])
    {
        printf("the largest num is : %d",a[5]);

    }


}
