#include<stdio.h>
#include<conio.h>
void main(){
    float a,d,f;
    printf("\n enter a=");

    scanf("%f",&a);
    if(a<=10000){
        d=a*5.0/100.0;
    }
    else if(a<=50000){
        d=a*10.0/100.0;
    }
    else if(a<=100000){
        d=a*20.0/100.0;
    }
    else{
        d=a*25.0/100.0;
    }
    f=a-d;
    printf("\n Discount = %f \n final amount to pay =%f",d,f);
    getch();
}