#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    printf("the sum of the 1 and 2 is %d\n",sum(1,2));
    int (*fptr) (int,int);
    fptr=&sum; 
    int d=(*fptr)(3,2);
    printf("d is %d\n",d);
    return 0;
}