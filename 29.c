#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("\n enter a,b=");
    scanf("%d %d",&a,&b);
    printf("\n before swapping=%d,%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n after swapping=%d,%d",a,b);
    getch();
}