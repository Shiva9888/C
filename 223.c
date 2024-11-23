#include<stdio.h>
#include<conio.h>
int fact(int);
int main(){
    int a[5],i,b;
    printf("\n enter array");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    printf("\n factor value");
    for(i=0;i<=4;i++){
        b=fact(a[i]);
        printf(" %d=%d",a[i],b);
    }
    return 0;
}
int fact(int x){
    int j,c;
    c=0;
    for(j=1;j<=x;j++){
        if(x%j==0){
            c++;
        }
    }
    return (c);
}