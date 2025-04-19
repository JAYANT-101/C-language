#include<stdio.h>
int fact(int a){
    if (a>=1){
        return a*fact(a-1);
    }else{
        return 1;
    }
}
int fib(int n){
    if(n==1|| n==0){
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
}
int main(){
printf("%d\n",fib(14));
printf("%d",fact(10));
}