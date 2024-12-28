#include<stdio.h>
#include<conio.h>
union print{
    int age;
    float percent;
    char name[50];
};
union print s[5];
void main(){
    int i;
    for(i=0;i<=4;i++){
    printf("\n enter name=");
    scanf("%s",&s[i].name);
    printf("\n name=%s",s[i].name);
    printf("\n enter age=");
    scanf("%d",&s[i].age);
    printf("\n age=%d",s[i].age);
    printf("\n enter percent=");
    scanf("%f",&s[i].percent);
    printf("\n Persent=%f",s[i].percent);
    }
    getch();
}