#include<stdio.h>
int sum(int a,int b);
void star(int n){
    for(int i=0;i<n;i++){
        printf("%c",'*');
    }
}
int takeNumber(){
    int i;
    printf("enter a number");
    scanf("%d",&i);
    return i;
}
void name(){
    char f[5];
    printf("enter yor name");
    gets(f);
    printf("%s",f);
}
int main(){
    // int c=sum(4,5);
    // printf("%d\n",c);
    // star(5);
    // c=takeNumber();
    // printf("the number is %d",c);
    name();
}
int sum(int a,int b){
    return a+b;
}