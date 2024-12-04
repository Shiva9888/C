#include<stdio.h>
#include<conio.h>
void fector(int , int *);
void main(){
    int a,c;c=0;
    printf("\n enter a=");
    scanf("%d",&a);
    fector(a,&c);
    printf("\n total fector=%d",c);
    getch();
}
void fector(int x ,int *y){
    int i;
    for(i=1;i<=x;i++){
        if(x%i==0){
            (*y)++;
        }
    }
}