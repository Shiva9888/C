// print sum of 5/7+9/13+13/19+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,a,b;
    float s;
    s=0; b=1; a=1;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=a+4;
        b=b+6;
        s=s+(1.0*a)/b;
    }
    printf("\n sum=%d",s);
    getch();
}