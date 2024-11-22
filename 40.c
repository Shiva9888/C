#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("\n enter a=");
    scanf("%d",&a);
    if(a%7==0 || a%10==7)
    printf("\n %d is buzz",a);
    else
    printf("\n %d is not buzz",a);
    getch(); 
}