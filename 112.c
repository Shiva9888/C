//print 0,1,1,2,4,7,_ _ _n.
#include<stdio.h>
#include<conio.h>
void main(){
int a,i,b,c,n,s;
    a=0;
    b=-1;
    c=1;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=a+b+c;
        a=b;
        b=c;
        c=s;
        printf("%d,",s);
    }
    getch();
}