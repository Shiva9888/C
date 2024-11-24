// print sum of x^5/12+x^8/16+x^11/20+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int i,x,n,p,a,b;
    float s;
    s=0; p=2; b=8;
    printf("\n enter n,x=");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++){
        p=p+3;
        a=pow(x,p);
        b=b+4;
        s=s+(1.0*a)/b;
    }
    printf("\n sum=%f",s);
    getch();
}