// print 1,4,9,25,_ _ _ n
#include<stdio.h>
#include<conio.h>
void main(){
    int a,i,n;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=i*i;
        printf("%d,",a);
    }
    getch();
}