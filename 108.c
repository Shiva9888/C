// print 8,14,20,26,_ _ _ n
#include<stdio.h>
#include<conio.h>
void main(){
    int a,i,n,b;
    b=8;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=b;
        printf("%d,",a);
        b=b+6;
    }
    getch();
}