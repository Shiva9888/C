#include<stdio.h>
#include<conio.h>
void main(){
    int a[2][3],i,j,s;
     s=0;
    printf("\n enter metrix");
    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++){
            s=s+a[i][j];
        }
        
    }
    printf("\n sum=%d",s);
    getch();

}