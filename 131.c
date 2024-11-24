// print sum of x^4/9-x^7/13+x^10/17-_ _ _ _n.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int i,x,n,p,a,b;
    float s;
    s=0; p=1; b=5;
    printf("\n enter n,x=");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++){
        p=p+3;
        a=pow(x,p);
        b=b+4;
        if(i%2==0)
        s=s-(1.0*a)/b;
        else
        s=s+(1.0*a)/b;
    }
    printf("\n sum=%f",s);
    getch();
}