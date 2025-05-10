#include<stdio.h>
typedef struct student
{
    int id;
}std;

int main(){
    std s1,s2;
    s1.id=11;
    s2.id=22;
    printf("s1 %d\n",s1.id);
    printf("s2 %d\n",s2.id);
    typedef unsigned long ul;
    ul l1,l2,l3;
    // int* a,b; this will make the 'a' a pointervereavrl and 'b' a intiger
    typedef int* intptr;
    intptr a,b;
    int c=8;
    a=&c;
    b=&c;
return 0;
}