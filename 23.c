#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int l,b,h,V,TSA,D;
    printf("\n enter l,b,h=");
    scanf("%d %d %d",&l,&b,&h);
    V=l*b*h;
    TSA=2*(l*b + b*h + h*l);
    D=sqrt(l*l + b*b + h*h);
    printf("\n v=%d \n TSA=%d \n D=%d",V,TSA,D);
    getch();
}