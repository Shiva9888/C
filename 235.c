#include<stdio.h>
#include<conio.h>
void main(){
    int a[3][4],i,j,s;
     s=0;
    printf("\n enter metrix");
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            s=s+a[i][j];
        }
        printf("\n sum row %d=%d",i+1,s);
    }
    getch();
}