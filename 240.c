#include<stdio.h>
#include<conio.h>
void main(){
    int a[3][3],j,i,n,c; c=0;
    printf("\n enter metrix");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(a[i][j]==n){
                c++;
                break;
            }
        }
    }
    if(c==0){
        printf("\n %d is not exist",n);
    }
    else{
        printf("\n %d is exist",n);
    }
    getch();
}