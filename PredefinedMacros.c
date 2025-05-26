#include<stdio.h>
int main(){
    printf("This file name is %s\n",__FILE__);
    printf("This date is %s\n",__DATE__);
    printf("This time is %s\n",__TIME__);
    printf("This line no is %d\n",__LINE__);
    printf("This ANSI %d\n",__STDC__);

    return 0;
}