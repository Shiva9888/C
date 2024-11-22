#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,f,r,s;
    s=0;
    printf("\n enter n=");
    scanf("%d",&n);
    for(n;n>0;n=n/10){
        r=n%10;
        f=1;
        for(i=1;i<=r;i++){
            f=f*i;
        }
        s=s+f;
    }
    printf("\n sum=%d",s);
    getch();
}