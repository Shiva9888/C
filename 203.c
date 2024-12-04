#include<stdio.h>
#include<conio.h>
int fect(int);
void main(){
    int a,b;
    printf("\n enter a=");
    scanf("%d",&a);
    b=fect(a);
    printf("\n Fectorial of %d=%d",a,b);
    getch();
}
int fect(int x){
    int i,f;
    f=1;
    for(i=1;i<=x;i++){
        f=f*i;
    }
    return (f);
}