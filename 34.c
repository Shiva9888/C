#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("\n enter a=");
    scanf("%d",&a);
    if(a>50 || a<10)
    printf("\n %d is more than 50 or less than 10",a);
    else
    printf("\n %d is not more than 50 or less than 10",a);
    getch();
}