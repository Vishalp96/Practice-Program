
#include<stdio.h>
int main()
{
    void *ptr;
    void *ptr1;
    int a=10;
    char b;
    ptr=&a;
    ptr1=&b;
    printf("%d\n",*(int *)ptr);
    printf("%d\n",ptr1);
}
