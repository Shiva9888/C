#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char a[50],b[50];
    int i,c,l;
    printf("\n enter string=");
    gets(a);
    l=strlen(a);
    l=l-1;
    for(i=0;i<=l;i++){
        b[l-i]=a[i];
    }
    c=strcmp(a,b);
    if(c==0)
    printf("\n it is pelendrom");
    else
    printf("\n it is not pelendrom");
    getch();
}