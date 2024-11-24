// print sum of x^3+x^8+x^13+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int i,x,n,p,a;
    float s;
    s=0; p=-2;
    printf("\n enter n,x=");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++){
        p=p+5;
    
        a=pow(x,p);
        
        s=s+a;
    }
    printf("\n sum=%f",s);
    getch();
}