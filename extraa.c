/* WAP INPUT A BINARY NUMBER AND CONVERT IN DECIMAL NUMBER*/
#include<stdio.h>
int main(){
    int bin,dec=0,bas=1,rem;
    printf("\n enter binary number=");
    scanf("%d",&bin);
    for(int tem=bin;tem>0;tem=tem/10){
        rem=tem%10;
        dec=dec+rem*bas;
        bas=bas*2;
    }
    printf("\n %d is the decimal number  of %d binary number",dec,bin);
    return 0;
}