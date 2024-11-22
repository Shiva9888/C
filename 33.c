#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("\n enter a=");
    scanf("%d",&a);
    if(a>10 && a<=20)
    printf("\n %d is more than 10 and less than equal 20",a);
    else
    printf("\n %d is not more than 10 amd less than equal 20",a);
    getch();
}