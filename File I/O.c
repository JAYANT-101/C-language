#include<stdio.h>
int main(){
    FILE *ptr=NULL;
    char string[34]="fuck you";
    // read
    // ptr=fopen("my.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("%s",string);
    // write
    ptr=fopen("my.txt","a");
    fprintf(ptr,"%s",string);
    fclose(ptr);
    return 0;
}