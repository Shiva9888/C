#include<stdio.h>
#include<conio.h>
struct display{
    int age;
    float percent;
    char name[50];
};
struct display p[5];
void main(){
    int i,a;
    for(i=0;i<=4;i++){
        printf("\n enter name,age,percent=");
        scanf("%s %d %f",&p[i].name,&p[i].age,&p[i].percent);
    }
    printf("\n name \t age \t percent");
    for(i=0;i<=4;i++){
        printf("\n %s \t %d \t %f",p[i].name,p[i].age,p[i].percent);
    }
    getch();
}
