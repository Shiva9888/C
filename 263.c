#include<stdio.h>
#include<conio.h>
union print{
    int page,year;
    char name[50];
};
union print s[5];
void main(){
    int i;
    for(i=0;i<=4;i++){
    printf("\n enter name=");
    scanf("%s",&s[i].name);
    printf("\n name=%s",s[i].name);
    printf("\n enter page=");
    scanf("%d",&s[i].page);
    printf("\n page=%d",s[i].page);
    printf("\n enter year=");
    scanf("%d",&s[i].year);
    printf("\n publication year=%d",s[i].year);
    }
    getch();
}