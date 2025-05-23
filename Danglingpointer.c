#include<stdio.h>
#include<stdlib.h>
int* myfun(){
    int a=4,b=4,sum;
    sum=a+b;
    return &sum;
}
int main(){
    // case 1 in which the pointer becomes falingling pointer after the meomey is free
    int* ptr=(int*) malloc(10*sizeof(ptr));
    ptr[0]=11;
    ptr[1]=14;
    ptr[2]=12;
    ptr[3]=13;
    free(ptr);
    // case two in which the pointer is pionting a to a function
    int* tpr=myfun();
    // case 2 in which the pointer referance is out of scoup
    int* ttr;
    {
        int a;
        ttr=&a;
    }
    // printf("%d\n",ttr);
    return 0;
} 