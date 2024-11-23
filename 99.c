#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,i,j,f,t;
    printf("\n enter a,b=");
    scanf("%d %d",&a,&b);
    if(a>b){
        t=a;
        a=b;
        b=t;
    }
    for(i=a+1;i<b;i++){
        f=1;
        for(j=1;j<=i;j++){
            f=f*j;
        }
        printf("\n %d=%d",i,f);
    }
    getch();
}