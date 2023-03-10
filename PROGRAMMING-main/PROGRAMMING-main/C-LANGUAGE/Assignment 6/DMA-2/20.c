/*
Title- 20. Write a C program to sort array in descending order using Dynamic memory allocation.
Author- Bambere Prachi Gorakh.
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j,temp;
    int* arr=NULL;
    printf("Enter how many elements do you want to enter into the array: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("enter array elements to sort: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(arr+j)>=*(arr+i))
            {
                temp=*(arr+j);
                *(arr+j)=*(arr+i);
                *(arr+i)=temp;
            }
        }
    }
    printf("Sorted array elements are: [");
    for(i=0;i<n;i++)
    {
        printf("%d, ",*(arr+i));
    }
    printf("]\n");
    free(arr);
    arr=NULL;
    
}
