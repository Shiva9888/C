#include<stdio.h>
#include<conio.h>
void fect(int);
void main(){
    int a;
    printf("\n enter a=");
    scanf("%d",&a);
    fect(a);
    getch();
}
void fect(int x){
    int i,f;
    f=1;
    i=1;
    while(i<=x){
        f=f*i;
        i++;
    }
    printf("\n %d=%d",x,f);
}