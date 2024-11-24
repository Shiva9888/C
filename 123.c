// print sum of 1/2+3/4+5/6+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,a,b;
    float s;
    s=0; b=0; a=-1;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=a+2;
        b=b+2;
        s=s+(1.0*a)/b;
    }
    printf("\n sum=%d",s);
    getch();
}