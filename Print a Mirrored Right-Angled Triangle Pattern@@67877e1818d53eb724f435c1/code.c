#include<Stdio.h>
int main()
{
    int n;
    printf("");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}