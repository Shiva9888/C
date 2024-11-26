#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char a[50],b[50];
    int i,c,l1,l2;
    printf("\n enter strint 1=");
    gets(a);
    printf("\n enter string 2=");
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    if(l1!=l2){
        printf("\n not equal");
    }
    else{
        i=0;c=0;
        while(i<l1){
        if(a[i]!=b[i]){
            c++;
            break;
        }
        i++;
        }
    }
    if(c==0){
        printf("\n equal");
    }
    else{
        printf("\n not equal");
    }
    getch();
}