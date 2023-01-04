#include<stdio.h>
int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    if(a%2==1)
    {
        printf("entered number is prime number: %d",a);

    }
    if(a%2==0)
    {
        printf("entered number is not prime number: %d",a);
    }
}
