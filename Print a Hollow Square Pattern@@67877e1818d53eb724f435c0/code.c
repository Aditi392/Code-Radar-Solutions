#include<stdio.h>
int main()
{
    int n,m;
    printf("");
    scanf("%d",&n);
    printf("");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
         if(i==1||n==i||j==1||m==j)
         printf("* ");
         else
         printf("");
        }
 printf("\n");
    }

    
    }