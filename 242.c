#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char a[50],ch;
    int uc,lc,i,l;
    printf("\n enter string=");
    gets(a);
    uc=0;
    lc=0;
    l=strlen(a);
    i=0;
    while(i<l){
        ch=a[i];
        if(ch>='A' && ch<='Z'){
            uc++;
        }
        else if(ch>='a' && ch<='z'){
            lc++;
        }
        i++;
    }
    printf("\n no. of upper=%d \n no. of lower=%d",uc,lc);
    getch();
}