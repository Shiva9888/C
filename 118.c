// print sum of 2+5+10+17+_ _ _ _n.
#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,s,a;
    s=0; 
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=i*i+1;
        s=s+a;
        
    }
    printf("\n sum=%d",s);
    getch();
}