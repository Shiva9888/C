#include<stdio.h>
#include<conio.h>
int fact(int);
void main(){
    int a,f;
    printf("\n enter a=");
    scanf("%d",&a);
    f=fact(a);
    printf("\n fectorial value %d=%d",a,f);
    getch();
}
int fact (int x){
    if(x==1){
        return (1);
    }
    else{
        return (x*fact(x-1));
    }
}