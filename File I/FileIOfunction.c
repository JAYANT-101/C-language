#include<stdio.h>
int main(){
    FILE *ptr=NULL;
    ptr=fopen("my.txt","a");
    // char c=fgetc(ptr);
    // printf("the cahracter i read was %c\n",c);
    // char c[100];
    // fgets(c,100,ptr);
    // printf("%s\n",c);
    // fclose(ptr);
    fputs("uck you",ptr);
    return 0;
}