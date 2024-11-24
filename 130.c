// print sum of x^9/12+x^14/19+x^19/26+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int i,x,n,p,a,b;
    float s;
    s=0; p=4; b=5;
    printf("\n enter n,x=");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++){
        p=p+5;
        a=pow(x,p);
        b=b+7;
        s=s+(1.0*a)/b;
    }
    printf("\n sum=%f",s);
    getch();
}