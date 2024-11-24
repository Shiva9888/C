// print sum of 3+6+12+24+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,s,a,b;
    s=0; b=3;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=b;
        s=s+a;
        b=b*2;
    }
    printf("\n sum=%d",s);
    getch();
}