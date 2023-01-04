#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter those number you want to find largest number in that :");
    scanf("%d\n%d\n%d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
    {
        printf("the largest num is: %d",num1);
    }
     if(num2>num1 && num2>num3)
    {
        printf("the largest num is: %d",num2);
    }
      if(num3>num1 && num3>num2)
    {
        printf("the largest num is: %d",num3);
    }
    if(num1==num2==num3)
    {
        printf("all num are equal");
    }
}
