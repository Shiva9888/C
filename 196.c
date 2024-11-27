#include<stdio.h>
#include<conio.h>
void series(int);
void main(){
    int a;
    printf("\n enter a=");
    scanf("%d",&a);
    series(a);
    getch();
}
void series(int x){
    int a,b,i,s;
    for(i=1;i<=x;i++){
        s=a+b;
        a=b;
        b=s;
        printf("%d,",s);
    }
}