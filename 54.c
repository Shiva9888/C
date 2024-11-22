#include<stdio.h>
#include<conio.h>
void main(){
    int n,F;
    printf("\n enter n=");
    scanf("%d",&n);
    if(n>=0 && n<=10){
        F=n*0;
    }
    else if(n<=20){
        F=n*0+(n-10)*1;
    }
    else if(n<=45){
        F=n*0+10*1+(n-20)*3;
    }
    else{
        F=n*0+10*1+25*3+(n-45)*5;
    }
    printf("\n Fine = %d",F);
    getch();
}