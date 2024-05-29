#include<stdio.h>
#define MAX 100

int function(char * str)
{
   
    int len=strlen(str);
    int mid=len/2;
    int flag=1;
    
    for(int i=0;i<mid;i++){
        if(str[i]!=str[len-i-1]){
            flag=0;
            break;
        }
    }
    return flag;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    int out=function(text);
    printf("%d",out);
}
