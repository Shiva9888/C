#include<stdio.h>
#include<conio.h>
void main(){
    int a,ch;
    float b,c;
    printf("\n enter ch,a=");
    scanf("%d %d",&ch,&a);
    switch(ch){
        case 1:
        b=a+a*(20.0/100.0);
        printf("\n increase number=%f",b);
        break;
        case 2:
        c=a*(60.0/100.0);
        printf("\n decrease number=%f",b);
        break;
        default:
        printf("\n wrong chioce");
    }
    getch();
}