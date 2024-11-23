// print 1,3,5,7,_ _ _ n
#include<stdio.h>
#include<conio.h>
void main(){
    int a,i,n;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=2*i-1;
        printf("%d,",a);
    }
    getch();
}