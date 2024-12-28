#include<stdio.h>
#include<conio.h>
union print{
    int a;
    float b;
    char c;
};
union print s;
void main(){
    printf("\n enter a=");
    scanf("%d",&s.a);
    printf("\n a=%d",s.a);
    printf("\n enter b=");
    scanf("%f",&s.b);
    printf("\n b=%f",s.b);
    printf("\n enter c=");
    scanf("%c",&s.c);
    printf("\n c=%c",s.c);
    getch();
}