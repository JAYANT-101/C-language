#include<stdio.h>
#include<math.h>
#define PI 3.14
float euclideanDistance(int a,int b,int c,int d){
    float v=sqrt((pow(b-a,2))+(pow(d-c,2)));
    printf("the distance is %0.2f\n",v);
    return v;
}
void circleArea(int a,int b,int c,int d,float (*ptr)(int,int,int,int)){
    double result=PI*(pow((*ptr)(a,b,c,d),2));
    printf("the area of the circle is %f",result);
}
int main(){
  
    printf("Enter the value of the x1,x2,y1,y2\n");
    int q,w,r,l;
    scanf("%d",&q);
    scanf("%d",&w);
    scanf("%d",&r);
    scanf("%d",&l);
    circleArea(q,w,r,l,euclideanDistance);

}