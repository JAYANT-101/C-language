#include<stdio.h>
void ChangeValue(int*a){
    *a=66;
}
int add(int* v,int* c){
    return *c=*v+*c;
}
int main(){
    int a=34,b=56;
    printf("the value of the a %d before change\n",a);
    ChangeValue(&a);
    printf("Value of a %d after change\n",a);
    add(&a,&b);
    printf("%d",b);
    return 0;
}