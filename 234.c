#include<stdio.h>
#include<conio.h>
void main(){
    int a[3][3],i,j,s;
     s=0;
    printf("\n enter metrix");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(i==j || i+j==2){
                s=s+a[i][j];
            }
        }
        
    }
   printf("\n sum=%d",s);
    getch();

}