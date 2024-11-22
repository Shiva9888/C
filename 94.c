#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,f,r;
    printf("\n enter n=");
    scanf("%d",&n);
    for(n;n>0;n=n/10){
        r=n%10;
        f=1;
        for(i=1;i<=r;i++){
            f=f*i;
        }
        printf("\n %d=%d",r,f);
    }
    getch();
}