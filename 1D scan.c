#include <stdio.h>

int main()
{
    int a[100],i,n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter the elements in the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nElements in array are: ");
    for(i=0; i<n; i++)

    {
        printf("%d  ", a[i]);
    }


}
