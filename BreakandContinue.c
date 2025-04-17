#include<stdio.h>
int main(){
    int i;
    for(i=0;i<79;i++){
        if (i==50)
        {
            break;
        }else if(i%2==0){
            printf("Fizz\n");     
        }else if (i%3==0){
            printf("Buzz\n");
        }else if(i%4==0){
            continue;
        }else{
            printf("%d\n",i);
        }
        
    }
}