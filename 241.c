#include<stdio.h>
#include<conio.h>
#include<string.h>
void  main(){
    char a[50];
    int l,c,i;
    printf("\n enter string=");
    gets(a);
    i=0; c=0;
    while(a[i]!='\0'){
        i++;
    }
    printf("\n lenght of string =%d",i);
    getch();
}