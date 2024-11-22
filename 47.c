#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("\n enter a,b=");
    scanf("%d %d",&a,&b);
    if(a<b)
    printf("\n %d is smaller",a);
    else
    printf("\n %d is smaller",b);
    getch();
}