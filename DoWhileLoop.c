#include<stdio.h>
int main(){
    printf("enter a number\n55");
    int a,index=0;
    scanf("%d",&a);
    do
    {
        printf("%d\n",index);
        index=index+1;
    } while (index<a);
    
    return 0;
}