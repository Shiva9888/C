#include<stdio.h>
#include<conio.h>
int fact(int);
int main(){
    int a[5],i,b;
    printf("\n enter array");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++){
        b=fact(a[i]);
        if(b==a[i])
        printf(" %d is special",a[i]);
    }
    return 0;
}
int fact(int x){
    int j,f,k,s,r;
    s=0;
    for(j=x;j>0;j=j/10){
        r=j%10;
        f=1;
        for(k=1;k<=r;k++){
            f=f*k;
        }
        s=s+f;
    }
    return (s);
}