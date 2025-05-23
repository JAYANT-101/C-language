#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the size of matric A\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Enter the dimetion of mtrix B\n");
    scanf("%d",&c);
    scanf("%d",&d);
    int matrixA[a][b];
    int matrixB[c][d];
    int matrixAB[b][c];
    if(b==c){
        printf("Enter the values of matrix A\n");
         for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      scanf("%d", &matrixA[i][j]);
    }
  }
        printf("Enter the value of matrix B\n");
         for (int i = 0; i < c; i++) {
    for (int j = 0; j < d; j++) {
      scanf("%d", &matrixB[i][j]);
    }
  }
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
               int m=0;
                for(int t=0;t<c;t++){
                    m+=matrixA[i][t]*matrixB[t][j];
                }    
                matrixAB[i][j]=m;
            }
        }
        printf("result\n");
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                printf(" %d,",matrixAB[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("This is not a valid matrix\n");
    }
    return 0;
}