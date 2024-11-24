// print sum of 1-x^2/9+x^5/12-x^10/15+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int i,x,n,p,a,b;
    float s;
    s=1.0; b=6; p=1;
    printf("\n enter n,x=");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++){
        p=(i*i)+1;
        a=pow(x,p);
        b=b+3;
        if(i%2==0)
        s=s+(1.0*a)/b;
        else
        s=s-(1.0*a)/b;
    }
    printf("\n sum=%f",s);
    getch();
}