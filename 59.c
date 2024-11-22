#include<stdio.h>
#include<conio.h>
void main(){
float m,I,A;
printf("\n enter m=");
scanf("%f",&m);
A=12*m;
if(A<=200000){
    I=0;
}
else if(A<=500000){
    I=(A-200000)*(10.0/100.0);
}
else if(A<=1000000){
    I=30000+(A-500000)*(20.0/100.0);
}
else{
    I=130000+(A-1000000)*(30.0/100.0);
}
if(I>50000){
    I=I+I*2.0/100.0;
}
printf("\n Income tax=%f",I);
getch();
}