#include<stdio.h>
#include<conio.h>
int fact(int);
int main(){
    int a[5],i,b;
    printf("\n enter array");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    printf("\n factorial value");
    for(i=0;i<=4;i++){
        b=fact(a[i]);
        printf(" %d=%d",a[i],b);
    }
    return 0;
}
int fact(int x){
    int j,f;
    f=1;
    for(j=1;j<=x;j++){
        f=f*j;
    }
    return (f);
}