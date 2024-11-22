#include<stdio.h>
#include<conio.h>
void main(){
    int ch,l,b,A,P;
    printf("\n enter ch,l,b=");
    scanf("%d %d %d",&ch,&l,&b);
    switch(ch){
        case 1:
        A=l*b;
        printf("\n Area =%d",A);
        break;
        case 2:
        P=2*(l+b);
        printf("\n Parimeter =%d",P);
        break;
        default:
        printf("\n wrong choice");
    }
    getch();
}