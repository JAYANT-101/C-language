#include<stdio.h>
int func1(int a){
    static int myvar=0;
    myvar++;
    printf("The value of myvar is %d\n",myvar);
    return a+myvar;
}
int main(){
int b=1;
for(int i=0;i<5;i++){
int val=func1(b);
printf("Calling the function %d times and the value of the value is %d\n",i,val);
}
return 0;
}