#include<stdio.h>
#include<conio.h>
void main(){
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("\n enter metrix a");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n enter metrix b");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            c[i][j]=0;
            for(k=0;k<=2;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    getch();
}