#include<stdio.h>
#include<conio.h>
int digit(int);
void main(){
    int a,b;
    printf("\n enter a=");
    scanf("%d",&a);
    b=digit(a);
    printf("\n total digit=%d",b);
    getch();
}
int digit(int x){
    int c,i;
    c=0;
    for(i=x;i>0;i=i/10){
        c++;
    }
    return (c);
}