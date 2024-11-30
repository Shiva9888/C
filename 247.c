#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char a[50],ch;
    int p,mx,i,l,m;
    printf("\n enter string=");
    gets(a);
    
    l=strlen(a);
    mx=0;
    p=0;
    for(i=0;i<=l;i++){
        ch=a[i];
        if(ch==' '){
            m=i-p;
            if(m>mx){
                mx=m;
            }
            p=i+1;
        }
    }
    printf("\n max lenght of word=%d",mx);
    getch();
}