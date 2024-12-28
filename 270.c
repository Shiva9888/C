#include<stdio.h>
#include<conio.h>
int sum(int , int);
void main(){
    int n,s;
    printf("\n enter n=");
    scanf("%d",&n);
    s=sum(n,1);
    printf("\n the sum of factors = %d",s);
}
int sum(int x, int i){
    if(i>x){
        return 0;
    }
    if(x%i==0){
        return i +sum(x, i+1);
    }
    return sum(x, i+1);
}