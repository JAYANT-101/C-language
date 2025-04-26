#include<stdio.h>
int main(){
    // int a ='3';
    // int* ptr=&a;
    // printf("%d\n",ptr);
    // ptr++;
    // printf("%d",ptr);
    int arry[]={1,2,3,4,5,6,67};
    printf("%d\n",arry[3]);
    printf("%d\n",&arry[0]);
    printf("%d\n",&arry[1]);
    printf("%d\n",&arry[0]+1);

    printf("%d\n",*(&arry[0]));
    printf("%d\n",*(&arry[1]));
    printf("%d\n",*(&arry[0]+1));
    int* arryptr=arry;
    arryptr++;
    printf("%d",*arryptr);
    return 0;
}