// print 5,15,45,_ _ _ n
#include<stdio.h>
#include<conio.h>
void main(){
    int a,i,n,b;
    b=5;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=b;
        printf("%d,",a);
        b=b*3;
    }
    getch();
}