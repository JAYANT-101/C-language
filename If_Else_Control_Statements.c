#include<stdio.h>
int main(){
    int a;
    printf("Enter age");
    scanf("%d",&a);
    if(a==20){
        printf("Hellow jayant");
    }else if (a>60)
    {
        printf("old");
    }else if (a<=18)
    {
        printf("new");
    }if (a>100&&a<1000)
    {
        printf("nice try");
    }
    
    else{
        printf("Fuking hell");
    }
    return 0;
    
}