#include<stdio.h>
#include<conio.h>
void main(){
    int a[3][2],i,j,p;
    printf("\n enter matrix");
    for(i=0;i<=2;i++){
        for(j=0;j<=1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<=1;j++){
        p=1;
        for(i=0;i<=2;i++){
            p=p*a[i][j];
        }
        printf("\n product colomn %d=%d",j+1,p);
    }
    getch();
}