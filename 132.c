// print sum of x^7/11-x^12/18+x^17/25-_ _ _ _n.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int i,x,n,p,a,b;
    float s;
    s=0; p=2; b=4;
    printf("\n enter n,x=");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++){
        p=p+5;
        a=pow(x,p);
        b=b+7;
        if(i%2==0)
        s=s-(1.0*a)/b;
        else
        s=s+(1.0*a)/b;
    }
    printf("\n sum=%f",s);
    getch();
}