#include<stdio.h>
#include<stdlib.h>
int main(){
    /*
    // Use of malloc
    int* ptr;
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    ptr=(int*) malloc(n*sizeof(int));
    for(int i=0; i < n; i++)
    {
        printf("Enter any number at the index on %d\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i <n; i++)
    {
        printf("The number a index of %d is %d\n",i,ptr[i]);
    }
    */
   // Use of calloc
    int* ptr;
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    ptr=(int*) calloc(n,sizeof(int));
    for(int i=0; i < n; i++)
    {
        printf("Enter any number at the index on %d\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i <n; i++)
    {
        printf("The number a index of %d is %d\n",i,ptr[i]);
    }
    // realloc
    // Use of malloc
    printf("Enter the size of new the array\n");
    scanf("%d",&n);
    ptr=(int*) realloc(ptr,n*sizeof(int));
    for(int i=0; i < n; i++)
    {
        printf("Enter any new number at the index on %d\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i <n; i++)
    {
        printf("The new number a index of %d is %d\n",i,ptr[i]);
    }

    return 0;
}