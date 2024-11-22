#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,c;
    c=0;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==1){
        printf("\n 1 is neither prime or composite");
    }
    else if(c==2){
        printf("\n %d is prime",n);
    }
    else{
        printf("\n %dis composite",n);
    }
    getch();
}