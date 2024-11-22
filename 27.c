#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float pi,r,h,V,TSA,CSA;
    printf("\n enter r,h=");
    scanf("%f %f",&r,&h);
    pi=3.14;
    V=pi*r*r*h;
    TSA=2*pi*r*(r+h);
    CSA=pi*r*r;
    printf("\n V=%f \n TSA=%f \n CSA=%f",V,TSA,CSA);
    getch();
}