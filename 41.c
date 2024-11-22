#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("\n enter a,b,c=");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c && (b+c)>a &&(c+a)>b)
    printf("\n trinagle formation is possible");
    else
    printf("\n triangle formation is not possible");
    getch();
}