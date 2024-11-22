#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("\n enter a,b=");
    scanf("%d %d",&a,&b);
    printf("\n before swapping=%d,%d",a,b);
    a=a+b;
    b=a;
    printf("\n after swapping=%d,%d",a,b);
    getch();
}