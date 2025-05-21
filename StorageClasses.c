#include<stdio.h>
// #include"tem.c"
int myfunc(int a,int b){
   extern int sum;
    return sum;
}
int sum=88;
int main(){
    // int sum=myfunc(2,4);
    // int sum=96;
    register int re=6;
    printf("the sum is %d,%d\n",sum,re);
    return 0;
}