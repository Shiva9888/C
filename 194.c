#include<stdio.h>
#include<conio.h>
void check(int);
void main(){
    int a;
    printf("\n enter a=");
    scanf("%d",&a);
    check(a);
    getch();
}
void check(int x){
    if(x%7==0 || x%10==7){
        printf("\n %d is buzz",x);
    }
    else{
        prinntf("\n %d is not buzz",x);
    }
}