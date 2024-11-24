// print sum of 9/14+15/22+21/30+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,a,b;
    float s;
    s=0; b=6; a=3;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=a+6;
        b=b+8;
        s=s+(1.0*a)/b;
    }
    printf("\n sum=%d",s);
    getch();
}