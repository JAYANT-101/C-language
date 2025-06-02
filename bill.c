#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * newbill(const char * str,const char * oldword,const char * newword){
    char * resultString;
    int i,count=0;
    int newWordLength=strlen(newword);
    int oldWordLength=strlen(oldword);
    for(i=0;str[i] !='\0';i++){
        if(strstr(&str[i],oldword)==&str[i]){
            count++;
            i=i+oldWordLength-i;
        }
    }
    //making space for new string
    resultString=(char *)malloc(i+count * (newWordLength - oldWordLength)+1);
    i=0;
    while (*str)
    {
        if(strstr(str,oldword)==str)
        {
        strcpy(&resultString[i],newword);
        i+=newWordLength;
        str+=oldWordLength;
        }
        else{
            resultString[i]= *str;
            i+=1;
            str+=1;
        }
    }
    resultString[i]='\0';
    return resultString;
    
}
int main(){
     FILE *ptr =NULL;
     FILE *ptr2=NULL;
     ptr=fopen("bill2.txt","r");
     ptr2=fopen("fenBill.txt","w");
     char str[200];
     fgets(str,200,ptr);
     printf("the bill trmpelt was %s\n",str);
     // calling the function
     char * Newstr;
     Newstr=newbill(str,"{{item}}","Table Fan");
     Newstr=newbill(Newstr,"{{outlet}}","hotel");
     Newstr=newbill(Newstr,"{{name}}","Jayant");
     printf("the actull bill generated is %s\n",Newstr);
     fprintf(ptr2,"%s",Newstr);
     fclose(ptr);
     fclose(ptr2);
    return 0;
}