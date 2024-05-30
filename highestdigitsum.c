#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
   int i, rem=0,sum,num,max, maxindex;
   int new[lim];
   for(i=0;i<lim;i++) {
       num=arr[i];
       sum=0;
       while(num>0) {
           rem=num%10;
           sum=sum+rem;
           num=num/10;
       }
     if(sum>max) {
         max=sum;
         maxindex=i;
     }
     return arr[maxindex];
   }
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    int out=function(A,n);    
    
    printf("%d",out);
    return 0;
}



