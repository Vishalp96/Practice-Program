#include<stdio.h>
int fun(int a,int b);
int main()
{
int   a=10;
   int b=20;
   int sum;
   printf("%d",fun(a,b));

}
int fun(int a,int b)
{
  int sum=a+b;
  return sum;
}
