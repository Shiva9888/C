#include<stdio.h>
#include<conio.h>
void check(int);
void  main(){
    int a;
    printf("\n enter a=");
    scanf("%d",&a);
    check(a);
    getch();
}
void check(int x){
    if(x%2==0){
        printf("\n %d is even",x);
    }
    else{
        printf("\n %d is odd",x);
    }
}