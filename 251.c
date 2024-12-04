#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main(){
    int a,b;
    printf("\n enter a,b=");
    scanf("%d %d",&a,&b);
    printf("\n a=%d \n b=%d",a,b);
    swap(&a,&b);
    printf("\n a=%d \n b=%d",a,b);
    getch();
}
void swap(int *x, int *y){
    int z;
    z=*x;
    *x=*y;
    *y=z;
}