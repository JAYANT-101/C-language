#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=55;
    int* ptr;
    // *ptr=34; //this is a whlid pointer
    ptr= &a;
    printf("the value of a %d\n",*ptr);
    return 0; 
}