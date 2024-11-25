// print sum of (1+x^5)/3!-(1+x^5+x^9)/7!+(1+x^5+x^9+x^13)/11!-_ _ _ _n.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int i,x,n,p,a,b,f,j,c;
    float s;
    s=0; b=-1; p=1; c=1;
    printf("\n enter n,x=");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++){
        p=p+4;
        a=pow(x,p);
        b=b+4;
        c=c+a;
        f=1;
        for(j=1;j<=b;j++){
            f=f*j;
        }
        if(i%2==0)
        s=s-(1.0*c)/b;
        else
        s=s+(1.0*c)/b;
    }
    printf("\n sum=%f",s);
    getch();
}