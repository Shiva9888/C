#include<stdio.h>
#include<conio.h>
int check(int);
void main(){
    int a,b;
    printf("\n enter a=");
    scanf("%d",&a);
    b=check(a);
    if(b==1){
        printf("\n 1 is neither prime orf composite");
    }
    else if(b==2){
        printf("\n %d is prime",a);
    }
    else{
        printf("\n %d is composite",a);
    }
    getch();
}
int check(int x){
    int i,c;
    c=0;
    for(i=1;i<=x;i++){
        if(x%i==0){
            c++;
        }
    }
    return (c);
}