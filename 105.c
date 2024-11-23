// print 2,9,28,65,_ _ _ n
#include<stdio.h>
#include<conio.h>
void main(){
    int a,i,n;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=i*i*i+1;
        printf("%d,",a);
    }
    getch();
}