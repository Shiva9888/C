// print 3,6,12,24,_ _ _ n
#include<stdio.h>
#include<conio.h>
void main(){
    int a,i,n,b;
    b=3;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=b;
        printf("%d,",a);
        b=b*2;
    }
    getch();
}