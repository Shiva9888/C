// sum of x/1+x^2/2+x^3/3+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void sum(int,int);
void main(){
    int x,n;
    printf("\n enter x,n=");
    scanf("%d %d",&x,&n);
    sum(x,n);
    getch();
}
void sum(int x,int y){
    int p,a,i,b;
    float s=0;
    for(i=1;i<=x;i++){
        p=i;
        a=pow(y,p);
        b=i;
        s=s+(1.0*a)/b;
    }
    printf("\n sum=%f",s);
}