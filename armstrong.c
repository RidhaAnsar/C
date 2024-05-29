#include<stdio.h>
#define MAX 100

int function(int num)
{
 int r=0, s = 0, temp=0;
    temp = num;
    while (num > 0) {
        r = num % 10;
        s = s + (r * r * r);
        num = num / 10;
    }
    if (temp == s) {
        return 1;
    } else {
        return 0;
    }
}

void main()
{   
    int num;
    scanf("%d",&num);
    int out=function(num);
    printf("%d",out);
}





