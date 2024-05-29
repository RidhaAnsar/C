#include<stdio.h>
#define MAX 30

float function(int arr[],int lim)
{

    int  i, s=0;
    float avg;
    for(i=0;i<lim;i++) {
        s=s+arr[i];
        
    }
    avg=(double)s/lim;
    
    return avg;
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    float out=function(A,n);    
    
    printf("%f",out);
    return 0;
}


