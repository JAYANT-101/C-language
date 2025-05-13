#include<stdio.h>
#include<string.h>
struct TravelAgencyManager
{
    int numberOfTrip;
    char name[30];
    int id;
}s1,s2,s3;

int main(){
    struct TravelAgencyManager;
    strcpy(s1.name,"calu");
    s1.id=11;
    s1.numberOfTrip=3;
    strcpy(s2.name,"ralu");
    s2.id=112;
    s2.numberOfTrip=5;
    strcpy(s3.name,"kalu");
    s3.id=113;
    s3.numberOfTrip=4;
    int a;
    printf("for details the drivers put 1 for driver1 and 2 for driver 2 and 3 for driver 3\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("id of driver 1:- %d\nname of driver 1:- %s\ntrips of driver 1:- %d\n",s1.id,s1.name,s1.numberOfTrip);
        break;
    case 2:
    printf("id of driver 2:- %d\nname of driver 2:- %s\ntrips of driver 2:- %d\n",s2.id,s2.name,s2.numberOfTrip);
    break;
    case 3:
    printf("id of driver 3:- %d\nname of driver 3:- %s\ntrips of driver 3:- %d\n",s3.id,s3.name,s3.numberOfTrip);
    break;
    default:
    printf("Wrong input");
        break;
    }
    return 0;
}