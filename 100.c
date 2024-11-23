#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,i,j,c;
    printf("\n enter a,b=");
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++){
        c=0;
        for(j=1;j<=i;j++){
            if(i%j==0)
            c++;
        }
       if(c==2){
        printf("%d,",i);
       }
    }
    getch();
}