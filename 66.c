#include<stdio.h>
#include<conio.h>
void main(){
    int a,ch;
    printf("\n enter ch,a=");
    scanf("%d %d",&ch,&a);
    switch(ch){
        case 1:
        if(a%2==0){
            printf("\n %d is even",a);
        }
        else{
            printf("\n %d is odd",a);
        }
        break;
        case 2:
        if(a%7==0 || a%10==7){
            printf("\n %d is buzz",a);
        }
        else{
            printf("\n %d is not buzz",a);
        }
        default :
        printf("\n wrong choice");
    }
    getch();
}