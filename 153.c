// 5
// 56
// 567
// 5678
// 567
// 56
// 5
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(i=5;i<=11;i++){
        if(i<=8){
            for(j=5;j<=i;j++){
                printf("%d",j);
            }
        }
        else{
            for(j=1;j<=(16-i);j++){
                printf("%d",j);
            }
        }
        printf("\n");
    }
    getch();
}