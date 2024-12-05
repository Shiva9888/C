#include<stdio.h>
#include<conio.h>
struct product{
    int qty;
    float amt;
    char name[50];
};
struct product p[5];
void main(){
    int i,a;
    for(i=0;i<=4;i++){
        printf("\n enter qt,amt,name=");
        scanf("%d %f %s",&p[i].qty,&p[i].amt,p[i].name);
    }
    printf("\n qty \t amt \t name");
    for(i=0;i<=4;i++){
        printf("\n %d \t %f \t %s",p[i].qty,p[i].amt,p[i].name);
    }
    getch();
}
