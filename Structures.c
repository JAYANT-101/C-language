#include<stdio.h>
#include<string.h>
struct bubu
{
    int id;
    int age;
    char fav_char;
    char name[30];
};

int main(){
struct bubu jayant,jaya;
jayant.id=111;
jayant.age=19;
jayant.fav_char='j';
jaya.id=112;
jaya.age=23;
jaya.fav_char='j';
strcpy(jaya.name,"jaya");
printf("jayant id,age and fav_char is %d,%d,%c\n",jayant.id,jayant.age,jayant.fav_char);
printf("jayant id,age and name is %d,%d,%s\n",jaya.id,jaya.age,jaya.name);
return 0;
}