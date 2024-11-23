#include<stdio.h>
#include<conio.h>
void main(){
    int a[5],i,j,min,pos,t;
    printf("\n enter array");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++){
        min=a[i];
        pos=i;
        for(j=i+1;j<=4;j++){
            if(a[j]<min){
                min=a[j];
                pos=j;
            }
        }
        if(pos != i){
            t=a[i];
            a[i]=a[pos];
            a[pos]=t;
        }
    }
    for(i=0;i<=4;i++){
        printf(" order = %d",a[i]);
    }
    getch(); 
}