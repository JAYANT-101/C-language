#include<stdio.h>
int main(){
    int p[]={1,2,3,4,5,6};
    int size = sizeof(p) / sizeof(p[0]);
    printf("The size of the array is: %d\n", size);
    int rev[10];
    int j=0;
    int i=size-1;
    printf("the revers of the array\n");
    for(i;i>=0;i--){
        int o=p[j];
        rev[i]=o;
        printf("%d,",rev[j]);
        // printf("\n%d",j);
        j++;
    }
    return 0;
}