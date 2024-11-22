#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("\n enter a=");
    scanf("%d",&a);
    if(a%6==0)
    printf("\n %d is multiple of 6",a);
    else
    printf("\n %d is not multiple of 6",a);
    getch();
}