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
    // ptr=fopen("my.txt","r+");will read and write at the start 
    // ptr=fopen("my.txt","w+");it will clean the txt file. you can write and read in this
    // ptr=fopen("my.txt","a+");you can read and write in this and it will write at the end
    return 0;
}