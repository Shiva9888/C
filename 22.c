#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float p,r,t,Si,Ci;
    printf("\n enter p,r,t=");
    scanf("%f %f %f",&p,&r,&t);
    Si=(p*r*t)/100;
    Ci=p*pow((1+r/100),t)-p;
    printf("\n SI=%f \n CI=%f",Si,Ci);
    getch();
}