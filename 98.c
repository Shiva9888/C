#include<stdio.h>
#include<conio.h>
void main(){
    int i,lcm,hcf,a,b,min;
    printf("\n enter a,b=");
    scanf("%d %d",&a,&b);
    if(a<b){
        min=a;
    }
    else{
        min=b;
    }
    for(i=min;i>0;i--){
        if(a%i==0 && b%i==0){
            hcf=i;
            break;
        }
    }
    lcm=(a*b)/hcf;
    printf("\n hcf=%d \n lcm=%d",hcf,lcm);
    getch();
}