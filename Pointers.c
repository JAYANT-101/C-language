#include<stdio.h>
int main(){
    int a =44;
    int* p=&a;
    int*k=NULL;
    printf("the value is %p , %d",&p, *p);
    return 0;
}