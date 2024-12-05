#include<stdio.h>
#include<conio.h>
struct display{
    int pincode;
    float house;
    char city[50];
};
struct display p[5];
void main(){
    int i,a;
    for(i=0;i<=4;i++){
        printf("\n enter pincode,house,city=");
        scanf("%d %f %s",&p[i].pincode,&p[i].house,p[i].city);
    }
    printf("\n CITY \t HOUSE \t PINECODE");
    for(i=0;i<=4;i++){
        printf("\n %s \t %f \t %d",p[i].city,p[i].house,p[i].pincode);
    }
    getch();
}
