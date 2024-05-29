#include<stdio.h>

int fun(int num)
{
    int highest=0, rem;
    highest=num%10;
    num=num/10;
    while(num>0) {
        rem=num%10;
        if(highest<rem){
        highest=rem;
    }
    num=num/10;
    }
    return highest;
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=fun(num);
    printf("%d",result);
    return 0;
}

