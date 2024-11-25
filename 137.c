// print sum of x^3/4+x^3+x^7/11+x^3+x^7+x^11/18_ _ _ _n.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int i,x,n,p,a,b,c;
    float s;
    s=0; b=-3; p=-1; c=0;
    printf("\n enter n,x=");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++){
       p=p+4;
       b=b+7;
       a=pow(x,p);
       c=c+a;
       s=s+(1.0*c)/b;
    }
    printf("\n sum=%f",s);
    getch();
}