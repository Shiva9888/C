#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char a[50];
    int i,l,j;
    printf("\n enter string=");
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++){
        for(j=0;j<=i;j++){
            printf("%c",a[j]);
        }
        printf("\n");
    }
    getch();
}