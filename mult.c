#include<stdio.h>
void mult(int a){
    printf("The mutiplcation of %d is\n",a);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",a,i,a*i);
    }
}
int main(){
    int a;
    printf("Enter a mumber\n");
    scanf("%d",&a);
    mult(a);
}