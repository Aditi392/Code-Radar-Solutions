#include<stdio.h>
int main()
{
    int n;
    printf("");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            d=64+a;
            char ch=(char)d;
            printf("%c ",ch);
        }
        printf("\n");
    }
}