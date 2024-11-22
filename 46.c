#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("\n enter a,b=");
    scanf("%d %d ",&a,&b);
    if(a>b)
    printf("\n %d is greater ",a);
    else
    printf("\n %d is greater ",b);
    getch();
}