#include<stdio.h>
#include<conio.h>
void area(int);
void main(){
    int a;
    printf("\n enter redius=");
    scanf("%d",&a);
    area(a);
    getch();
}
void area (int x){
    float A,
    A=3.14*x*x;
    printf("\n area of circle=%f",A);
}