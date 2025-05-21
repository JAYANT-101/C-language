#include<stdio.h>
int main(){
    int a=33;
    float b=33.3;
    void *ptr;
    ptr=&b;
    printf("The vlue of %f\n",*(float*)ptr);
    ptr=&a;
    printf("The vlue of %d\n",*(int*)ptr);
    return 0; 
}