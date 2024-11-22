#include<stdio.h>
#include<conio.h>
void main(){
    int i,a,n;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=2*i-2;
        printf("%d,",a);
    }
    getch();
}
