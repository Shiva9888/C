#include<stdio.h>
#include<conio.h>
int sum(int);
void main(){
    int a,s;
    printf("\n enter a=");
    scanf("%d",&a);
    s=sum(a);
    printf("\n sum of digit %d=%d",a,s);
    getch();
}
int sum(int x){
    if(x==0){
        return 0;
    }
    else{
        return(x%10) + sum(x/10);
    }
}