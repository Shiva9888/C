#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char a[50],ch;
    int i,l,c;
    printf("\n enter string=");
    gets(a);
    c=0;
    l=strlen(a);
    for(i=0;i<l;i++){
        ch=a[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            c++;
        }
    }
    printf("\n total vowel =%d",c);
    getch();
}