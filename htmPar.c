#include<stdio.h>
#include<string.h>
void parser(char *String){
    int n=0;
    int index=0;
    for(int i=0;i<strlen(String);i++){
        if(String[i]=='<'){
            printf("this is the frist print \n");
            n=0;
            continue;
        }
        else if (String[i]=='>')
        {n=1;
            printf("n is %d\n",n);
            continue;
        }if(n==1){
            String[index]=String[i];
            index++;
        }
    }
    String[index]='\0';
    int index2=0;
    for(int i=0;i<strlen(String);i++){
        if (String[strlen(String)]==' ')
        {
            printf("this if (String[strlen(String)]==' ') is working\n ");
            String[strlen(String)]=String[strlen(String)+1];
        }
        
        if(String[i]==' '||String[i+1]==' '){
            printf("this n=1&&String[i]==' '||String[i+1]==' '\n");
            String[index2]==String[i+1];
            String[i+1]==String[i+2];
        }}
    printf("%s",String);
}
int main(){
char string[]="<h1>                    jayant sinha   <h1>";
parser(string);
    return 0; 
}