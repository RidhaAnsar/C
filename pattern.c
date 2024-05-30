#include <stdio.h>

int main()
{
   int n, i,j;
   printf("enter limit:");
   scanf("%d", &n);
   for(i=0;i<n;i++) {
       for(j=i+1;j<n;j++) {
           printf("*");
       }
       printf("\n");
   }
      for(i=0;i<n;i++) {
       for(j=1;j<n;j++) {
           printf("*");
       }
       printf("\n");
  
}
}

