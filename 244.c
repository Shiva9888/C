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
       if(!((ch>='A' && ch<='Z') || (ch>='a' && ch>='z') || (ch>='0' && ch<='9') || (ch==' '))){
        c++;
       }
    }
    printf("\n special charcter=%d",c);
    getch();
}