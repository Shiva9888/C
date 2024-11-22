#include<stdio.h>
#include<conio.h>
void  main(){
    int n,b;
    printf("\n enter n=");
    scanf("%d",&n);
    if(n>=0 && n<=100){
        b=n*1+100;
    }
    else if(n<=250){
        b=100*1+(n-100)*4+100;
    }
    else if(n<=650){
        b=100*1+150*4+(n-250)*9+100;
    }
    else{
        b=100*1+150*4+400*9+(n-650)*15+100;
    }
    printf("\n Bill =%d",b);
    getch();    
}