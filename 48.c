#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("\n enter a,b,c=");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("\n %d is largest",a); 
    }
    else if(b>a && b>c){
        printf("\n %d is largest",b);
    }
    else{
        printf("\n %d is largest",c);
    }
    getch();
}