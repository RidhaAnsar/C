#include<stdio.h>

int checkPrime(int num)
{
    int i, flag=1;
    if(num==1) {
        return 0;
    }
    for(i=2;i<num/2;i++) {
        if(num%i==0) {
            flag=0;
            return 0;
        }
    }
         if(flag==1)
            {
          
            return 1;
            }
        }
    



void main()
{   
    int num;
    int result;
    scanf("%d",&num);
    result=checkPrime(num);
    printf("%d",result);
}



