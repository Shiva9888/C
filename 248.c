#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char a[50],ch;
    int i,l,p;
    printf("\n enter string=");
    gets(a);
    l=strlen(a);
    printf("%c.",a[0]);
    for(i=l-1;i>=0;i--){
        ch=a[i];
        if(ch==' '){
            p=i;
            break;
        }
    }
    for(i=0;i<p;i++){
        if(a[i]==' '){
            printf("%c.",a[i+1]);
        }
    }
    for(i=p+1;i<l;i++){
        printf("%c",a[i]);
    }
    getch();
}