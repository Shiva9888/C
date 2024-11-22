#include<stdio.h>
#include<conio.h>
void main(){
    char ch;
    printf("\n enter ch=");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("\n %c is vowel",ch);
        break;
        default:
        printf("\n %c is consonant",ch);
    }
    getch();
}