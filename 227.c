#include<stdio.h>
#include<conio.h>
#include<math.h>
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
        printf("\n %d is armstrong",a[i]);
    }
    return 0;
}
int fact(int x){
    int j,r,s,c;
    c=0;
    for(j=x;j>0;j=j/10){
        c++;
    }
    s=0;
    for(j=x;j>0;j=j/10){
        r=j%10;
        s=s+pow(r,c);
    }
    return (s);
}