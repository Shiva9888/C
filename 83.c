#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,r,S,P;
    printf("\n enter n=");
    scanf("%d",&n);
    S=0;P=1;
    for(i=n;i>0;i=i/10){
        r=i%10;
        if(r%2==0){
            S=S+r;
        }
        else{
            P=P*r;
        }
    }
    printf("\n Sum=%d \n Product =%d",S,P);
    getch();
}