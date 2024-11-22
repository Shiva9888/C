#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,r,s;
    s=0;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10){
        r=i%10;
        s=s+r;
    }
    printf("\n sum=%d",s);
    getch();
}