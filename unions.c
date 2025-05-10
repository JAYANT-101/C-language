#include<stdio.h>
#include<string.h>
union beti
{
    int id;
    int marks;
    char name[34];
} un;

int main(){
     union un;
     un.id=123;
     un.marks=99;
     strcpy(un.name,"jayant");
     printf("detai of jayant sinha with name id and marks %s\n%d\n%d\n",un.name,un.id,un.marks);
return 0;
}