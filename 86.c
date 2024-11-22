#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int i,n,s,c,r;
    s=0;c=0;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10){
        c++;
    }
    for(i=n;i>0;i=i/10){
        r=i%10;
        s=s+pow(r,c);
    }
    if(s==n){
        printf("\n %d is armstrong",n);
    }
    else{
        printf("\n %d is not armstrong",n);
    }
    getch();
}