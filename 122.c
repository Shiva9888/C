// print sum of 1/2+2/3+3/4+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,a,b;
    float s;
    s=0; b=1; a=0;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=a+1;
        b=b+1;
        s=s+(1.0*a)/b;
    }
    printf("\n sum=%d",s);
    getch();
}