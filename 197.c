#include<stdio.h>
#include<conio.h>
void digit(int);
void main(){
    int a;
    printf("\n enter a=");
    scanf("%d",&a);
    digit(a);
    getch();
}
void digit(int x){
    switch(x){
        case 0:
        printf("\n ZERO");
        break;
        case 1:
        printf("\n ONE");
        break;
        case 2:
        printf("\n TWO");
        break;
        case 3:
        printf("\n THREE");
        break;
        case 4:
        printf("\n FOUR");
        break;
        case 5:
        printf("\n FIVE");
        break;
        case 6:
        printf("\n SIX");
        break;
        case 7:
        printf("\n SEVEN");
        break;
        case 8:
        printf("\n EIGHT");
        break;
        case 9:
        printf("\n NINE");
        break;
        default:
        printf("\n Wrong choice");
    }
}