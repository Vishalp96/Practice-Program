#include<stdio.h>
void main()
{

    int size, n;
    printf("Enter the size of array: ");
    scanf("%d",&size);

        int a[size];
        printf("Enter the elements of array: \n");
        for (int i=0; i<size; i++)
{


    printf("Index %d: ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter the number to be searched");
    scanf("%d", &n);
    for (int i=0; i<size; i++)
{

    if(a[i]==n)
        {



            printf("The number d found at id index ",a[i], i);

        }
    }
}
