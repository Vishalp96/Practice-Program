#include<stdio.h>
void main()
{
    int a[8]={1,1,0,0,1,0,1,0};
    printf("LSB=%d\n",a[0]);
    printf("MSB=%d",a[8-1]);
}
