#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,c;
    c=0;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    printf("\n Total fector=%d",c);
    getch();
}