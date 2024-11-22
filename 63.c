#include<stdio.h>
#include<conio.h>
void main(){
    int ch,a,A,P;
    printf("\n enter ch,a=");
    scanf("%d %d",&ch,&a);
    switch(ch){
        case 1:
        A=a*a;
        printf("\n Area =%d",A);
        break;
        case 2:
        P=4*a;
        printf("\n Parimeter =%d",P);
        break;
        default:
        printf("\n wrong choice");
    }

    getch();
}