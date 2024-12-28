#include<stdio.h>
#include<conio.h>
union print{
    float qty,amt;
    char name[50];
};
union print s[5];
void main(){
    int i;
    for(i=0;i<=4;i++){
    printf("\n enter product name=");
    scanf("%s",&s[i].name);
    printf("\n name=%s",s[i].name);
    printf("\n enter qty=");
    scanf("%f",&s[i].qty);
    printf("\n qty=%f",s[i].qty);
    printf("\n enter amount=");
    scanf("%f",&s[i].amt);
    printf("\n amount=%f",s[i].amt);
    }
    getch();
}