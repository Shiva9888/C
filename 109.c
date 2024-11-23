// print 1,4,7,10,_ _ _ n
#include<stdio.h>
#include<conio.h>
void main(){
    int a,i,n,b;
    b=1;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=b;
        printf("%d,",a);
        b=b+3;
    }
    getch();
}