#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("\n enter a=");
    scanf("%d",&a);
    if(a%2==0)
    printf("\n %d is even ",a);
    else
    printf("\n %d is odd",a);
    getch();
}