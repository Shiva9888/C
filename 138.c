// print sum of (1+x^4)/9+(1+x^4+x^7)/18+(1+x^4+x^7+x^10)/36+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int i,x,n,p,a,b,c;
    float s;
    s=0; b=9/2; p=1; c=1;
    printf("\n enter n,x=");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++){
       p=p+3;
       b=b*2;
       a=pow(x,p);
       c=c+a;
       s=s+(1.0*c)/b;
    }
    printf("\n sum=%f",s);
    getch();
}