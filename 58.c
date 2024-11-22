#include<stdio.h>
#include<conio.h>
void main(){
    int days;
    char roomtype;
    float rc=0,tc=0,sc=0;
    printf("\n enter the number of days stayed=");
    scanf("%d",&days);
    printf("\n enter the room type [a for ac , n for ac]=");
    scanf("%c",&roomtype);
    if(roomtype=='a'){
        if(days<=5){
            rc=days*5000;
        }
        else if(days<=15){
            rc=5*5000+(days-5)*4500;
        }
        else if(days<=40){
            rc=5*5000+10*4500+(days-15)*4200;
        }
        else{
            rc=5*5000+10*4500+25*4200+(days-40)*3500;
        }
    }
    else if(roomtype =='n'){
        if(days<=5){
            rc=days*3000;
        }
        else if(days<=15){
            rc=5*3000+(days-5)*2700;
        }
        else if(days<=40){
            rc=5*3000+10*2700+(days-15)*2500;
        }
        else{
            rc=5*3000+10*2700+25*2500+(days-40)*2000;
        }
    }
    else{
        printf("\n invalid roomtype");
    }
    sc=rc*0.5;
    tc=rc+sc;
    printf("\n your total charges=rs %f",tc);
    getch();
}