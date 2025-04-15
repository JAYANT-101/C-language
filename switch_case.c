#include<stdio.h>
int main(){
    int a,b,c;
    printf("1 of add 2 for sub");
    scanf("%d",&a);
    printf("Enter to number");
    scanf("%d",&b);
    scanf("%d",&c);
    switch (a)
    {
    case 1:
        printf("%d",c+b);
        break;

    case 2:
      printf("%d",b-c);
      break;    
      default:
      printf("Enter the two finking number ok");
        break;
    }
    // nested switch case a thing
}