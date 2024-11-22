#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int a,b,c;
    printf("\n enter a,b=");
    scanf("%d %d",&a,&b);
    c=sqrt(a*a-b*b);
    printf("\n c=%d",c);
    getch();
}
