#include<stdio.h>
int main()
{
    int i,num,temp,revers;
    scanf("%d",&num);
    while(num!=0)
    {
        temp=num%10;
        revers=revers*10+temp;
        num=num/10;




    }
      printf("%d",revers);

}

