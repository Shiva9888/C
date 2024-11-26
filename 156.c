// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(i=1;i<=9;i++){
        if(i<=5){
            for(j=1;j<=i;j++){
                printf("*");
            }
        }
        else{
            for(j=1;j<=(10-i);j++){
                printf("*");
            }
        }
        printf("\n");
    }
    getch();
}