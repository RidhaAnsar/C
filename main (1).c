#include<stdio.h>

int reverse(int num)
{
    int s=0,rem=0, rev;
    while(num>0) {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
        
    
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=reverse(num);
    printf("%d",result);
    return 0;
}

