#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,j,f,r,s;
    s=0;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10){
        r=i%10;
        f=1;
        for(j=1;j<=r;j++){
            f=f*j;
        }
        s=s+f;
    }
    if(s==n){
        printf("\n %d is special",n);
    }
    else{
        printf("\n %d is not special",n);
    }
    getch();
}