// print sum of 1+1/2+1/3+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,a,b;
    float s;
    s=0; b=0; a=1;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=a;
        b=b+1;
        s=s+(1.0*a)/b;
    }
    printf("\n sum=%d",s);
    getch();
}