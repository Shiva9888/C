#include<stdio.h>
#include<conio.h>
void main(){
    float u,v,F;
    printf("\n enter u,v=");
    scanf("%f %f",&u,&v);
    F=(u*v)/(u+v);
    printf("\n F=%f",F);
    getch();
}