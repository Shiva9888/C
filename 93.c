#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,F;
    F=1;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        F=F*i;
    }
    printf("\n %d is fectorial value of %d",F,n);
    getch();
}