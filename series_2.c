#include<stdio.h>
#define MAX 100

int function(int year)
{
   
   int arr[MAX],i;
   arr[1]=1;
   arr[2]=1;
   for(i=3; i<=year;i++) {
       if(i%2==0) {
           arr[i]=arr[i-2]*3;
       }
       else if(i%2==1) {
           arr[i]=arr[i-2]*2;
       }
   }
   return arr[year];
}


void main()
{   
    int y;
    scanf("%d",&y);
    int out=function(y);
    printf("%d",out);
}


