// print sum of x^7/5!-x^15/9!+x^23/13!-_ _ _ _n.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int i,x,n,p,a,b,f,j;
    float s;
    s=0; b=1; p=-1;
    printf("\n enter n,x=");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++){
        p=p+8;
        a=pow(x,p);
        b=b+4;
        f=1;
        for(j=1;j<=b;j++){
            f=f*j;
        }
        if(i%2==0)
        s=s-(1.0*a)/b;
        else
        s=s+(1.0*a)/b;
    }
    printf("\n sum=%f",s);
    getch();
}