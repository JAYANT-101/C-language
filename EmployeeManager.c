#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char* arr;
    int id,j=0;
    printf("Enter id\n");
    scanf("%d",&id);
    arr=(char*) malloc(id*sizeof(char));
    for(int i=0; i < id; i++)
    {
        printf("Enter  no %d\n",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <id; i++)
    {
        printf("at %d is %d\n",i,arr[i]);
    }
    while(j<id){
            printf("Enter id\n");
    scanf("%d",&id);
    arr=(char*) malloc(id*sizeof(char));
    for(int i=0; i < id; i++)
    {
        printf("Enter  no %d\n",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <id; i++)
    {
        printf("at %d is %d\n",i,arr[i]);
    }
    j++;
    }
    return 0;
}