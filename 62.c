#include<stdio.h>
#include<conio.h>
void main(){
    int ch;
    printf("\n enter choice =");
    scanf("\n %d",&ch);
    switch(ch){
        case 1:
        printf("\n Bhundelkhand");
        break;
        case 2:
        printf("\n Univercity");
        break;
        default:
        printf("\n wrong choice");
    }
    getch();
}