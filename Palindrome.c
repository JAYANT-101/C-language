#include<stdio.h>
int count(char *str){
    int c=0;
    while (str[c]!='\0')
    {
        c++;
    }
    return c;
    
}
int main(){
    printf("Enter your word\n");
    char ip[20];
    gets(ip);
    int size=count(ip);
    int half=size/2;
    int result=0;
    if(size%2==0){
        for(int i=0;i<half;i++){
            if(ip[i]==ip[half+i]){
                ++result;
            }else
            {
                printf("This is not a palindrom\n");
                break;
            }
            
        }
    }else
            {
                printf("This is not a palindrom\n");
            }
    if(result==half){
        printf("The word '%s' is a palindrom\n",ip);
    }
    return 0;
}