#include<stdio.h>
#include<conio.h>
void main(){
    int d,T;
    printf("\n enter d=");
    scanf("%d",&d);
    if(d>=0 && d<=10){
        T=100;
    }
    else if(d<=30){
        T=100+(d-10)*9;
    }
    else if(d<=80){
        T=100+20*9+(d-30)*7;

    }
    else{
        T=100+20*9+50*7+(d-80)*5;
    }
    printf("\n Texi fare =%d",T);
    getch();
}