//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k;
    for(i=1;i<=9;i++){
        if(i<=4){
            for(k=1;k<=5-i;k++){
                printf(" ");
            }
            for(j=1;j<=2*i-1;j++){
                printf("*");
            }
        }
        else{
            for(k=1;k<=5-i;k++){
                printf(" ");
            }
            for(j=1;j<=19-2*i;j++){
                printf("*");
            }
        }
        printf("\n");
    }
    getch();
}