#include<stdio.h>
#include<conio.h>
int fac(int,int);
void main(){
    int a,f;
    printf("\n enter a=");
    scanf("%d",&a);
    f=fac(a,1);
    printf("\n fector =%d",f);
    getch();
}
int fac (int x,int i){
    if(i>x){
        return 0;
    }
   if(x%i==0){
    return 1 + fac(x, i +1);
   }
   return fac(x,i + 1);
}