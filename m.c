#include<stdio.h>
int main()
{
    printf("enter a value\n");
    int k;
    scanf("%d",&k);
    printf("enter a value\n");
    int q;
    scanf("%d",&q);
    printf("enter a value\n");
    int w;
    scanf("%d",&w);
    printf("enter a value\n");
    int e;
    scanf("%d",&e);
    int a[k][q];
    int b[w][e];
    int c[k][e];
    if(q==w){
        for(int i=0;i<k;i++){
        for(int j=0;j<q;j++){
            printf("enter the martix value\n");
            int mango;
            scanf("%d", &mango);
            a[i][j] = mango;
            
        }
        }

        for(int i=0;i<w;i++){
        for(int j=0;j<e;j++){
            printf("enter the martix value\n");
            int tango;
            scanf("%d", &tango);
            a[i][j] = tango;
            
        }
        }
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<e;j++){
            c[i][j] += ;
            
        }
    }
    

for(int i=0;i<k;i++){
        for(int j=0;j<e;j++){
            printf("show the valu %d\n", c[i][j]);
}
    }





    
    return 0;
}
