#include<stdio.h>
#include<conio.h>
void count(int);
void main(){
    int a;
    printf("\n enter a=");
    scanf("%d",&a);
    count(a);
    getch();
}
void count(int x){
    int i,c;
    c=0;
    for(i=x;i>0;i=i/10){
        c++;
    }
    printf("\n total number=%d",c);
}