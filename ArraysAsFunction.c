#include<stdio.h>
// Any value changed in the function will change the oregnal
int fun1(int array[]){
    for(int i=0;i<4;i++){
        printf("the value at %d is %d\n",i,array[i]);
    }
    return 0;
}
int func2(int*ptr){
    for(int i=0;i<4;i++){
        printf("the value at %d is %d\n",i,*(ptr+i));
    }
    return 0;
}
int main(){
     int a[]={21,3,4,5,7,6};
     fun1(a);
     func2(a);
return 0;
}