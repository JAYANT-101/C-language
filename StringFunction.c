#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="Jayant";
    char s2[]="Sinha";
    char s3[22];
    // puts(strcat(s1,s2));
    printf("the length of the s1 is %d\n",strlen(s1));
    printf("the length of the s2 is %d\n",strlen(s2));
    printf("the reverse of the s1 is %s\n",strrev(s1));
    strcpy(s3,strcat(s1,s2));
    puts(s3); 
    printf("The strcam for s1,s2 returned %d",strcmp(s1,s2));
    return 0;
}