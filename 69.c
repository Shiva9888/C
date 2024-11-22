#include<stdio.h>
#include<conio.h>
#include<math.h>
void  main(){
    int ch,a,b,c,he,ba,S,Ar,A;
    printf("\n enter ch=");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("\n enter a,b,c=");
        scanf("%d %d %d",&a,&b,&c);
        S=(a+b+c)/2;
        Ar=sqrt(S*(S-a)*(S-b)*(S-c));
        printf("\n Area =%d",Ar);
        break;
        case 2:
        printf("\n enter he,ba=");
        scanf("%d %d",&he,&ba);
        A=(he*ba)/2;
        printf("\n Area =%d",A);
        default :
        printf("\n wrong chioce");
    }
    getch();
}