#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("\n enter a=");
    scanf("%d",&a);
    if(a%8==0 && a%6==4)
    printf("\n %d is require number",a);
    else
    printf("\n %d is not require number",a);
    getch();
}