// print sum of 5+9+13+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,s,a,b;
    s=0; b=5;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=b;
        s=s+a;
        b=b+4;
    }
    printf("\n sum=%d",s);
    getch();
}