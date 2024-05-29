#include<stdio.h>
#include<string.h>
#define MAX 100

int function(char * str, char character)
{
   int len=strlen(str);
   int count=0;
   for(int i=0;i<len;i++) {
       if(str[i]==character) {
           count++;
       }
   }
   return count;
}


void main()
{   
    char ch,text[MAX];
    ch=getchar();
    fgets(text, sizeof(text), stdin);
    
    int out=function(text,ch);
    printf("%d",out);
}

