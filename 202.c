#include<stdio.h>
#include<conio.h>
int Sum(int);
void main(){
    int a,b;
    printf("\n enter a=");
    scanf("%d",&a);
    b=Sum(a);
    printf("\n Sum of digit=%d",b);
    getch();
}
int Sum(int x){
    int r,s,i;
    s=0;
    for(i=x;i>0;i=i/10){
        r=i%10;
        s=s+r;
    }
    return (s);
}