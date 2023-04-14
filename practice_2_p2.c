#include<stdio.h>
int main()
{
      int a,b,c,ans;
      scanf("%d %d %d %d",&a,&b,&c,&ans);
          
          int s=a+b*c;
          int l= a-b+c;
          int k= a*b-c;
          int d=a*b+c;
          int o=a+b-c;
          int p=a-b*c;
          

          if (s==ans)
          {
            printf("YES");
          }else if (l==ans)
          {
            printf("YES");
          }else if (k==ans)
          {
             printf("YES");
          }else if (o==ans)
          {
            printf("YES");
          }else if (p==ans)
          {
            printf("YES");
          }
          else if (d==ans)
          {
            printf("YES");
          }else{
            printf("NO");
          }
          
          
          
          


    
    return 0;
}