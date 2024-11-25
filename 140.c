// print sum of 1-(1-x^1)/4!+(1-x^1+x^4)/8!-(1-x^1+x^4-x^9)/16!-_ _ _ _n.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int i,x,n,p,a,b,f,j,c;
    float s;
    s=1; 
    printf("\n enter n,x=");
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++){
        p=i*i;
        a=pow(x,p);
        b=b*2;
        f=1;
        for(j=1;j<=b;j++){
            f=f*j;
        }
        if(i%2==0){
          c=c+a;
          s=s+(1.0*c)/b;
        }
        else{
            c=c-a;
            s=s-(1.0*c)/b;
        }
    }
    printf("\n sum=%f",s);
    getch();
}