#include<stdio.h>
#include<conio.h>
union print{
    int pincode,number;
    char name[50];
};
union print s[5];
void main(){
    int i;
    for(i=0;i<=4;i++){
    printf("\n enter city name=");
    scanf("%s",&s[i].name);
    printf("\n name=%s",s[i].name);
    printf("\n enter pincode=");
    scanf("%d",&s[i].pincode);
    printf("\n pincode=%d",s[i].pincode);
    printf("\n enter house number=");
    scanf("%d",&s[i].number);
    printf("\n house number=%d",s[i].number);
    }
    getch();
}