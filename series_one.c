#include<stdio.h>
#define MAX 100

int function(int year)
{

    int n=0,i;
    if(year%2==1){
        for(i=0;i<year/2;i++) {
            n=n+7;
        }
    }
    if(year%2==0) {
        for(i=1;i<year/2;i++) {
            n=n+6;
        }
        
    }
    return n;
}


void main()
{   
    int y;
    scanf("%d",&y);
    int out=function(y);
    printf("%d",out);
}


