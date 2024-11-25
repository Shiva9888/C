//    9
//   98
//  987
// 9876 
//98765 
#include<stdio.h>
#include<conio.h>
void  main(){
    int i,j,k;
    for(i=9;i>=5;i++){
        for(k=1;k<=(i-5);k++){
            printf(" ");
        }
        for(j=9;j>=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
}