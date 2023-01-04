
#include<stdio.h>
int fun_cold();
int fun_hot();
int main(){
    int a;
    printf("enter the value of temp\n");
    scanf("%d",&a);
    if(a<=0)
    {
        fun_cold();
    }
    else{
        fun_hot();
    }}

    int fun_cold()
    {
        printf("entered temp value is cold");
    }
    int fun_hot()
    {
        printf("entered temp value is hot");
    }


