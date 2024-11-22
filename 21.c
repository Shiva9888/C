#include<stdio.h>
#include<conio.h>
void main(){
    float pi,d,r,A,C;
    printf("\n enter d=");
    scanf("%f",&d);
    r=d/2;
    pi=3.14;
    A=pi*r*r;
    C=2*pi*r;
    printf("\n Area =%f \n circumference =%f",A,C);
    getch();
}