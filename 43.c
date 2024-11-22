#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("\n enter a,b,c=");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("\n triangle formation is possible");
        if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
            printf("\n this is right angle triangle");
        }
        else{
            printf("\n this is not right angle triangle"); 
        }

    }
    else{
        printf("\n triangle formation is not possible");
    }
    getch();
}