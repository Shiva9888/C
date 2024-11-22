#include<stdio.h>
#include<conio.h>
void main(){
    int ch;
    printf("\n enter choice=");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("\n BCA");
        break;
        case 2:
        printf("\n MCA");
        break;
        case 3:
        printf("\n MBA");
        break;
        default:
        printf("\n wrong chioce");
    }
    getch();
}