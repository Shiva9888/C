#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("\n enter a,b=");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("\n order=%d,%d",a,b);
    }
    else{
        printf("\n order=%d,%d",b,a);
    }
    getch();
}