#include<stdio.h>
int main()
{int reverse,v,temp;
    int num;
    printf("enter the number");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        v=num%10;
        reverse=reverse*10+v;
   num=num/10;
    }
    if( reverse==temp)
    {
        printf("entered num is palindrome num: %d",reverse);
    }else{
    printf("entered num is not palindrome num: %d",reverse);}
}
