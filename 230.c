#include<stdio.h>
#include<conio.h>
void main(){
    int a[10],i,c,n;
    c=0;
    printf("\n enter array");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    printf("enter n=");
    scanf("%d",&n);
    for(i=0;i<=9;i++){
         if(a[i]==n){
            c++;
         }
    }
    printf("ferequancy of %d is %d",n,c);
    getch();
}