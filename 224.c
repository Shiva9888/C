#include<stdio.h>
#include<conio.h>
int prime(int);
int main(){
    int a[5],i,b;
    printf("\n enter array");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++){
        b=prime(a[i]);
        if(b==2)
        printf("\n %d is prime",a[i]);
        
    }
    return 0;
}
int prime(int x){
    int j,c;
    c=0;
    for(j=1;j<=x;j++){
       if(x%j==0){
        c++;
       }
    }
    
    return (c);
}