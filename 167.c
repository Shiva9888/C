// *    *
//  *  *
//   **
//  *  *
// *    *
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        if(i<=3){
            for(j=1;j<=i;j++){
                printf(" ");
            }
            printf("*");
            for(k=1;k<=6-2*i;k++){
                printf(" ");
            }
            printf("*");
        }
        else{
            for(j=1;j<=5-i;j++){
                printf(" ");
            }
            printf("*");
            for(k=1;k<=2*i-5;k++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    getch();
}