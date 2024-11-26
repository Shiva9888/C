// 9
// 98
// 987
// 9876
// 987
// 98
// 9
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(i=9;i>=3;i--){
        if(i>=6){
            for(j=9;j>=i;j--){
                printf("%d",j);
            }
        }
        else{
            for(j=9;j>=(12-i);j--){
                printf("%d",j);
            }
        }
        printf("\n");
    }
    getch();
}