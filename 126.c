// print sum of x+x^2+x^3+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int i,x,n,p,a;
    float s;
    s=0; p=0;
    printf("\n enter n,x=");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++){
        p=p+1;
    
        a=pow(x,p);
        
        s=s+a;
    }
    printf("\n sum=%f",s);
    getch();
}