// print 2,4,6,8,_ _ _ n
#include<stdio.h>
#include<conio.h>
void main(){
    int a,i,n;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=2*i;
        printf("%d,",a);
    }
    getch();
}