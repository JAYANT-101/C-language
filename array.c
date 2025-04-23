#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i =0;i<10;i++){
        printf("%d\n",a[i]);
    }
    int b[3][3];
    for(int p=0;p<3;p++){
        int j=0;
        for(j;j<3;j++){
            int t;
            printf("Enter the numbers");
            scanf("%d",&b[p][j]);
        }
    }
    for(int k=0;k<3;k++){
        int h=0;
        for(h;h<3;h++){
            printf("%d ",b[k][h]);
        }
        printf("\n");
    }
    return 0;
}