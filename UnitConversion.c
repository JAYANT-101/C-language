#include<stdio.h>
#include<stdbool.h>
int main (){
int a,b;
bool isValid = true;
while (isValid==true)
{   
printf("1 kms to miles\n2 inches to foot\n3 pound to kgs\n4 exit\n");
scanf("%d",&a);
if(a!=4){
printf("Ente a value\n");
scanf("%d",&b);
}else{
    printf("bye bye");
    break;
}
switch (a)
{
case 1:
    printf("The %d km is %f in miles",b,(float)b*0.62137);
    break;
case 2:
    printf("The %d inch is %f in feet",b,(float)b*0.0833);
    break;
case 3:
    printf("The %d pound is %f in kg",b,(float)b*0.45359237);
    break;
case 4:
isValid=false;
    break;

default:
    break;
}
}

}