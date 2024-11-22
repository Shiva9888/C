#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,c;
    c=0;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10){
        c++;
    }
    printf("\n total number=%d",c);
    getch();
}