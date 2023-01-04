#include<stdio.h>
int main()
{
    int arr[6];
    int i,j,k,count,scount,bcount,vish;
    for( i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("entered arr is\n");
     for( i=0;i<6;i++)
     {
    printf("%d\t",arr[i]);

     }
     for( j=0;j<6;j++)
     {

             count++;

     }
             printf("\nthe number of elements in arr :%d",count);

          for( i=0;i<6;i++)
    {
           if(arr[i]<0)
           {

               printf("\n negative numbers in arr is:%d",arr[i]/count);
           }
    }
    for( i=0;i<6;i++)
    {
           if(arr[i]>0)
           {

               printf("\n positive numbers in arr is:%d",arr[i]/count);
           }
    }
for( i=0;i<6;i++)
    {
           if(arr[i]==0)
           {

               printf("\n  zero in arr is:%d",arr[i]\count);
           }
    }







}
