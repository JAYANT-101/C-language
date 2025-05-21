#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int c=(rand() %(3-1+1))+1;
    printf("1:rock\n2:paper\n3:sisser\n");
    int p;
    scanf("%d",&p);
    if(c==p){
        printf("Tie\n");
    }
    else if (c==1&&p==3)
    {
        printf("loss\n");
    }
    else if (c==2&&p==1)
    {
        printf("loss\n");
    }
    else if (c==3&&p==2)
    {
        printf("loss\n");
    }
    else{
        printf("win\n");
    }
}