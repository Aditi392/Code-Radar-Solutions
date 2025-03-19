#include<stdio.h>
int main()
{
int n;
printf("");
scanf("%d",&n);
int a;
for(int i=1;i<=n;i++){
    if(a%2!=0) a=1;
    else a=0;
    printf("%d ",a);
    for(int j=1;j<=i;j++){
        if(a%2==0) a=1;
        else a=0;
          printf("%d ",a);
    }
    
    printf("\n");
}
}

