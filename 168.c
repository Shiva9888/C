//     55
//    4  4 
//   3    3
//  2      2
// 1        1
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        printf("%d",i);
        for(k=1;k<=10-2*i;k++){
            printf(" ");
        }
        printf("%d",i);
        printf("\n");
    }
    getch();
}