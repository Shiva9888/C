// print 7,15,23,31,_ _ _ n
#include<stdio.h>
#include<conio.h>
void main(){
    int a,i,n,b;
    b=7;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=b;
        printf("%d,",a);
        b=b+8;
    }
    getch();
}