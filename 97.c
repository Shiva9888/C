#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,n,r,s;
    printf("\n enter n=");
    scanf("%d",&n);
    s=0;
    for(j=n;j>9;j=s){
        for(i=n;i>0;i=i/10){
            r=i%10;
            s=s+r;
        }
    }
    if(s==1){
        printf("\n %d is magic",n);
    }
    else{
        printf("\n %d is not magic",n);
    }
    getch();
}