#include<stdio.h>
int main()
{
    int n;
    printf("");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            printf("%d ",(i+j)%2);
        }
        printf("\n");
    }
}
