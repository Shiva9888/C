// *******
//  *****
//   ***
//    *
#include<stdio.h>
#include<conio.h>
void  main(){
    int i,j,k;
    for(i=1;i<=4;i++){
        for(k=1;k<=(i-1);k++){
            printf(" ");
        }
        for(j=1;j<=(9-2*i);j++){
            printf("*");
        }
        printf("\n");
    }
    getch();
}