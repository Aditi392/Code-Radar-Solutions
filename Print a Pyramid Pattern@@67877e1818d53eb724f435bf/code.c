#include<stdio.h>
int main()
{
    int n;
    printf("");
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-1;k++){
            printf("");
        }
        for(int j=1;j<=nst;j++){
            printf(" *");
        }
        nst=nst+2;
        printf("\n");
    }
}