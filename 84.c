#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,r,S;
    S=0;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10){
        r=i%10;
        S=S+r*r;
    }
    printf("\n sum=%d",S);
    getch();
}