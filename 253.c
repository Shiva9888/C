#include<stdio.h>
#include<conio.h>
void fect(int , int *);
void main(){
    int a,f=1;
    printf("\n enter a=");
    scanf("%d",&a);
    fect(a,&f);
    printf("\n fectorial value of %d is %d",a,f);
    getch();
}
void fect(int x,int *y){
    int i;
    for(i=1;i<=x;i++){
        *y=*y*i;
    }
}