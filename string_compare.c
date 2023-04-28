#include<stdio.h>
#include<string.h>
int main()
{
      
      char a[50], b[50];
      scanf("%s",&a);
      scanf("%s",&b);

      int d = strcmp(a,b);

      if (d==0)
      {
        printf("String are Equal");
      }
      else{
        printf("String are not equal");
      }
      


    
    return 0;
}