#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("\n enter a=");
    scanf("%d",&a);
    if(a%400==0){
        printf("\n %d is leap year",a);       
    }
    else if(a%100==0){
        printf("\n %d is not leap year",a);
    }
    else if(a%4==0){
        printf("\n #d is leap year",a);
    }
    else{
        printf("\n %d is not leap year",a);
    }
    getch();
}