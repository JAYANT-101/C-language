#include<stdio.h>
int main(){
    int a =44;
    int* p=&a;
    printf("the value is %p , %d",&p, *p);
    return 0;
}