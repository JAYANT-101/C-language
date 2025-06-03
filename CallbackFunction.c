#include<stdio.h>
#include<stdlib.h>
int sum(int s,int b){
    return s+b;
}
int avg(int f,int h){
    return (f+h)/2;
}
void greetHello(int (*fptr)(int,int)){
    printf("hello\n");
    printf("the sum of 2 and 6 is %d\n",fptr(4,5));
}
void greetGm(int(*fptr)(int,int)){
    printf("good morning\n");
    printf("the sum of 2 and 6 is %d\n",fptr(4,5));
}
void greetAfternoon(int(*ptr)(int,int)){
    printf("afternoon\n");
    printf("the average of 3 and 5 is %d\n",ptr(3,5));
}
int main(){
    int (*fptr)(int,int);
    fptr=sum;
    int (*ptr)(int,int);
    ptr=avg;
    greetAfternoon(ptr);
    // greetHello(fptr);
    // greetGm(fptr);
    return 0;
}