/* INPUT LENGHT AND BREDTH OF RECTANGLE AND PRINT AREA AND PAREMETER */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int l,b,A,P;
    printf("\n enter l,b=");
    scanf("%d %d",&l,&b);
    A=l*b;
    P=2*(l+b);
    printf("\n Area =%d \n Parimeter =%d",A,P);
    getch();
}
