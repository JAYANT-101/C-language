#include<stdio.h>
void printstr(char str[]){
    int i=0;
    while ((str[i]!='\0'))
    {
        printf("%c",str[i]);
        i++;
    }
    
}
int main(){
char str[]={'j','a','y','a','n','t','\0'};
char s[]="jayant";
char p[34];
gets(p);
printf("\nthr user input %s",p);
printstr(str);
printstr(s);
return 0;
}