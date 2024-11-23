#include<stdio.h>
#include<conio.h>
int digit(int);
int main(){
    int a[5],i,b;
    printf("\n enter array");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    printf("\n sum of each digit");
    for(i=0;i<=4;i++){
        b=digit(a[i]);
        printf(" %d=%d",a[i],b);
    }
    return 0;
}
int digit(int x){
    int j,r,s;
    s=0;;
    for(j=x;j>0;j=j/10){
        r=j%10;
        s=s+r;
    }
    return (s);
}