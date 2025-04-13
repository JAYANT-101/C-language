#include<stdio.h>
int main(){
    int a,d,c;
    float b;
    d=11;
    c=10;
    a=34;
    b=3.45;
    printf("a+b = %f\n",a+b);
    printf("a-b = %f\n",a-b);
    printf("a*b = %f\n",a*b);
    printf("a/b = %f\n",a/b);
    printf("a|b %d\n",d|c);
    printf("a^b ,%d\n",d^c);
    // printf("ab = %f\n",a%b);

    printf("a & b %d",d&c);

    return 0;
}