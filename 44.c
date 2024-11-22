#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("\n enter a,b,c=");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c==180){
        printf("\n triangle formation is possible");
        if(a>0 && b>0 && c>0){
            printf("\n each angle should be more than 0");
        }
        else{
            printf("\n each angle should not be more than 0");
        }
    }
    else{
        printf("\n trinalge formation is not possible");
    }
    getch();
}