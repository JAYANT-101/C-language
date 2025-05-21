#include<stdio.h>
int main(){
    int a=22;
    int* ptr=&a;
    // int* ptr=NULL;
    if(ptr!=NULL){
    printf("the address of a is %d\n",*ptr);
    }
    else{
        printf("Good");
    }
    return 0;
}