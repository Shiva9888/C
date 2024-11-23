//print 0,1,1,2,3,_ _ _ n.
#include<stdio.h>
#include<conio.h>
void main(){
    int a,i,b,n,s;
    a=-1;
    b=1;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=a+b;
        a=b;
        b=s;
        printf("%d,",s);
    }
    getch();
}