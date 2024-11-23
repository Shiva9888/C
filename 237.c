#include<stdio.h>
#include<conio.h>
void main(){
    int a[2][3],b[3][2],i,j;
    printf("\n enter metrix");
    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++){
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=1;j++){
            printf("%d",b[j][i]);
        }
        printf("\n");
    }
    getch();
}