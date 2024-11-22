#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,r,s;
    s=0;
    printf("\n enter n=");
    scanf("%d",&n);
    i=n*n;
    for(i;i>0;i=i/10){
        r=i%10;
        s=s+r;
    }
    if(s==n)
    printf("\n %d is neon",n);
    else
    printf("\n %d is not neon",n);
    getch();
}