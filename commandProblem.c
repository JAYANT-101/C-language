#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char * operation;
    operation=argv[1];
    int num1,num2;
    num1=atoi(argv[2]);
    num2=atoi(argv[3]);
    if(strcmp(operation,"add")==0){
        printf("result %d\n",num1+num2);
    }else if(strcmp(operation,"sub")==0){
        printf("result %d\n",num1-num2);
    }else if(strcmp(operation,"div")==0){
        printf("result %d\n",num1/num2);
    }else if(strcmp(operation,"mult")==0){
        printf("result %d\n",num1*num2);
    }
    return 0;
}
