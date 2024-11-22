#include<stdio.h>
#include<conio.h>
void main(){
    char b;
    printf("\n enter b=");
    scanf("%c",&b);
    if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u' || b=='A' || b=='E' || b=='I' || b=='O' || b=='U')
    printf("\n %c is vowel",b);
    else
    printf("\n %c is consonant",b);
    getch();
}