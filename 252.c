#include<stdio.h>
#include<conio.h>
void calculate( int , int ,int *,int *);
void main(){
    int l,b,ar,pr;
    printf("\n enter l,b=");
    scanf("%d %d",&l,&b);
    calculate(l,b,&ar,&pr);
    printf("\n Area=%d \n parimeter=%d",ar,pr);
    getch();
}
void calculate(int a, int c,int *x,int *y){
    *x=a*c;
    *y=2*(a+c);
}