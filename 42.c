#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("\n enter a,b,c=");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("\n triangle formation is possible");
        if(a==b && b==c){
            printf("\n equilateral triangle");
        }
        else if(a==b || b==c || c==a){
            printf("\n issosceles triangle");
        }
        else{
            printf("\n scelene triangle");
        }     
    }
    else{
        printf("\n trianlge formation not possible");
    }
    getch();
}