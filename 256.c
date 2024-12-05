#include<stdio.h>
#include<conio.h>
struct print{
    int a;
    float b;
    char c;
};
struct print s;
void main(){
    printf("\n enter a,b,c=");
    scanf("%d %f %c",&s.a,&s.b,&s.c);
    printf("\n a=%d \n b=%f \n c=%c",s.a,s.b,s.c);
    getch();
}