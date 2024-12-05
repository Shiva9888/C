#include<stdio.h>
#include<conio.h>
struct display{
    int page,year;
    char name[50];
};
struct display p[5];
void main(){
    int i,a;
    for(i=0;i<=4;i++){
        printf("\n enter name,page,year=");
        scanf("%s %d %d",&p[i].name,&p[i].page,&p[i].year);
    }
    printf("\n name \t page \t year");
    for(i=0;i<=4;i++){
        printf("\n %s \t %d \t %d",p[i].name,p[i].page,p[i].year);
    }
    getch();
}
