#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int u,a,t,V,D;
    printf("\n enter u,a,t=");
    scanf("%d %d %d",&u,&a,&t);
    V=u+(a*t);
    D=u*t+(a*t*t)/2;
    printf("\n V=%d \n D=%d",V,D);
    getch();
}