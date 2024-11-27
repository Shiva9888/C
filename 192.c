#include<stdio.h>
#include<conio.h>
void calculate(int,int);
void main(){
    int a,b;
    printf("\n enter a,b=");
    scanf("%d %d",&a,&b);
    calculate(a,b);
    getch();
}
void calculate(int x,int y){
    int A,P;
    A=x*y;
    P=2*(x+y);
    printf("\n Area=%d \n Parimeter=%d",A,P);
}