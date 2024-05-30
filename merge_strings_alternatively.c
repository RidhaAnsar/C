#include <stdio.h>
#include<string.h>

int main()
{
    int i=0, j=0, k;
    char result[100];
    char word1[]="abc";
    char word2[]="pqr";
    int length1=strlen(word1);
    int length2=strlen(word2);
    for(k=0; k< (length1+length2); )
    {
        if(i<length1) {
            result[k++]=word1[i++];
        }
        if(j<length2)  {
            result[k++]=word2[j++];
        }
    }
    result[k]='\0';
    printf("%s", result);
return 0;
}
