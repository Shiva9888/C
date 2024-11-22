#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    char op;
    printf("\n enter op,a,b=");
    scanf("%c %d %d",&op,&a,&b);
    switch(op){
        case '+':
        c=a+b;
        printf("\n Sum=%d",c);
        break;
        case '-':
        c=a-b;
        printf("\n Difference =%d",c);
        break;
        case '*':
        c=a*b;
        printf("\n product =%d",c);
        break;
        case '/':
        c=a/b;
        printf("\n division =%d",c);
        break;
        default:
        printf("\n wrong choice");
    }
    getch();
}