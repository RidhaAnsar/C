#include<stdio.h>
#include<stdlib.h>
#define MAX 30

int function(int arr[],int lim, int x)
{
   int  i,j,sum, diff, min, result;
   min=10000;
   for(i=0;i<lim-1;i++) {
       for(j=i+1;j<lim;j++) {
           sum=arr[i]+arr[j];
           diff=abs(x-sum);
           if(diff<min) {
               min=diff;
               result=sum;
           }
       }
   }
   return result;
   
}

int main() {
    int i,length,array[MAX];
    int x;
    scanf("%d",&x);
    while((scanf("%d,",&array[i]))!=-1){
        i++;
    }
    length=i;
    int out=function(array,length,x);
    printf("%d",out);
    return 0;
}

