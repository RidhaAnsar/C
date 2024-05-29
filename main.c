#include<stdio.h>

int sumofdig(int num)
{
    int rem=0,s=0;
    while(num>0){
    rem=num%10;
    s=s+rem;
    num=num/10;
}
return s;
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=sumofdig(num);
    printf("%d",result);
    return 0;
}

