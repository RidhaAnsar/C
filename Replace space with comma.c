#include<stdio.h>
#include<string.h>
#define MAX 100

char * function(char * str)
{
    
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]==' ') {
            str[i]=',';
        }
    }
    return str;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    char * out=function(text);
    printf("%s",out);
    
}
