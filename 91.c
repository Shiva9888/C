#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,r,re;
    re=0;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10){
        r=i%10;
        re=re*10+r;
    }
    printf("\n %d=%d",r,re);
    getch();
}