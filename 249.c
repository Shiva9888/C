#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char a[50];
    int i,l;
    printf("\n enter string=");
    gets(a);
    l=strlen(a);
    printf("%c.",a[0]);
    for(i=0;i<l;i++){
        if(a[i]==' ' && a[i+1]!='\0'){
            printf("%c.",a[i+1]);
        }
    }
    getch();
}