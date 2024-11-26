// 1
// 12
// 123
// 1234
// 123
// 12
// 1
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(i=1;i<=7;i++){
        if(i<=4){
            for(j=1;j<=i;j++){
                printf("%d",j);
            }
        }
        else{
            for(j=1;j<=(8-i);j++){
                printf("%d",j);
            }
        }
        printf("\n");
    }
    getch();
}