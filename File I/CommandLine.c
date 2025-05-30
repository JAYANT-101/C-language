#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("The balue of argc is %d\n",argc);
    for(int i=0;i<argc;i++){
        printf("this argument number %d has the value %s\n",i,argv[i]);
    }
    return 0;
}
