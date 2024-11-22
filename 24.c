#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float pi,l,g,T,F;
    pi=3.14;
    g=9.8;
    printf("\n enter l=");
    scanf("%f",&l);
    T=2*pi*sqrt(l/g);
    F=1/T;
    printf("\n T=%f \n F=%f",T,F);
    getch();
}