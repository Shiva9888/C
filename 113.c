//print 4,6,7,9,10,11,_ _ _ n.
#include<stdio.h>
#include<conio.h>
void main(){
    int a,i,j,b,n,s;
    printf("\n enter n=");
    scanf("%d",&n);
    a=-1;
    b=1;
    for(i=1;i<=n; ){
        s=a+b;
        a=b;
        b=s;
        for(j=a+1;j<b;j++){
            printf("%d",j);
            i++;
            if(i>n)
            break;
        }
    }
    getch();
}