#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n<=1)
    {
        printf("Not Prime");
    }
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            printf("");
        }
    }
    printf("Prime");
}