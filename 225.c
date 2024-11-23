#include<stdio.h>
#include<conio.h>
int perfect(int);
int main(){
    int a[5],i,b;
    printf("\n enter array");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++){
        b=perfect(a[i]);
        if(b==a[i])
        printf("\n %d is perfect",a[i]);
    }
    return 0;
}
int perfect(int x){
    int j,s;
    s=0;
    for(j=1;j<x;j++){
        if(x%j==0){
            s=s+j;
        }
    }
    return (s);
}