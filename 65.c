#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("\n enter a,b=");
    scanf("%d %d",&a,&b);
    c=a/b;
    switch(c){
        case 0:
        printf("\n %d is greater",b);
        break;
        default:
        printf("\n %d is greater",a);
    }
    getch();
}