#include<stdio.h>
#include<conio.h>
void sum(int ,int *);
void main(){
    int a,s; s=0;
    printf("\n enter a=");
    scanf("%d",&a);
    sum(a,&s);
    printf("\n sum=%d",s);
    getch();
}
void sum(int x,int *y){
    int i,r;
    for(i=x;i>0;i=i/10){
        r=i%10;
        *y=*y+r;
    }
}