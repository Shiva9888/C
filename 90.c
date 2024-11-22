#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,c;
    c=0;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            c=c+i;
        }
    }
    if(c==n){
        printf("\n %d is perfect",n);
    }
    else{
        printf("\n %d is not perfect",c);
    }
    getch();
}