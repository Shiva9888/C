// print 1,2,3,4,_ _ _ n
#include<stdio.h>
#include<conio.h>
void main(){
    int a,i,n;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=i;
        printf("%d,",a);
    }
    getch();
}