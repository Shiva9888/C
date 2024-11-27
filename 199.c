#include<stdio.h>
#include<conio.h>
void digit(int);
void main(){
    int a;
    printf("\n enter a=");
    scanf("%d",&a);
    digit(a);
    getch();
}
void digit(int x){
    int r,i,s;
    s=0;
    for(i=x;i>0;i=i/10){
        r=i%10;
        s=s+r;
    }
    printf("\n sum=%d",s);
}