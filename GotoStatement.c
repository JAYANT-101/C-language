#include<stdio.h>
int main(){
//     printf("lula\n");
//     label:
//     printf("we are inside label\n");
//     // goto end;
//  printf("Hello world\n");

//  goto label;
 for(int i=1; i<8;++i){
    printf("Enter 0 to exsit\n");
    for(int j=0;j<i;++j){
        int a;
        scanf("%d\n",&a);
        if(a!=0){
            printf("%d\n",i);
        }else{
            goto end;
            // break;
        }
    }
 }
 end:
 printf("we arre at end\n");
}