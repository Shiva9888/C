#include<stdio.h>
#include<conio.h>
int count(int);
void main(){
    int a,c;
    printf("\n enter a=");
    scanf("%d",&a);
    c=count(a);
    printf("\n digit of number %d=%d",a,c);
    getch();
}
int count (int x){
    if(x==0){
        return 0;
    }
    else{
        return(1)+ count(x/10);
    }
}