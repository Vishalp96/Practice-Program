#include<stdio.h>
int main()
{
    int op1[5];
    int op2[5];
    int op[5];
    int n=5;
    int k=4;
    int ary[5];
    printf("enter the arry");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&ary[i]);
    }

    printf(" this is first index here we are doing and operation with this 0 index to whole ary: %d\n",ary[0]);

    for(int i=0; i<5; i++)
    {
        int x=ary[0]&ary[i];

        printf("this is and operation: %d\n",x);
        if(x<k)
        {
            op[i]= x;

        }

    }
    for(int i=0; i<5; i++)
    {
        if (op[0] < op[i])
        {
            op[0]=op[i];
        }
    }
    printf("this is the largest number in that and operation %d\n ",op[0]);



    printf("_______________________________________________\n");
    for(int i=0; i<5; i++)
    {
        int y=ary[0]|ary[i];

        printf("this is or operation: %d\n",y);

        if(y<k)
        {
            op1[i]= y;

        }

    }
    for(int i=0; i<5; i++)
    {
        if (op1[0] < op1[i])
        {
            op1[0]=op1[i];
        }
    }
    printf("this is the largest number in that and operation %d\n ",op1[0]);


    printf("_______________________________________________\n");
    for(int i=0; i<5; i++)
    {
        int z=ary[0]^ary[i];

        printf("this is xor operation: %d\n",z);

        if(z<k)
        {
            op2[i]= z;

        }
    }
    for(int i=0; i<5; i++)
    {

        if (op2[0]<op2[i])
        {
            op2[0]=op2[i];
        }
    }

    printf("this is the largest number in that and operation %d\n ",op2[0]);

}

