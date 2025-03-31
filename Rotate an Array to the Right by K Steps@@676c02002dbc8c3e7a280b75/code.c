#include<stdio.h>
int main()
{    
    int reverse;
    int n;
    prinf("");
    scanf("%d",n);
    int arr[n];
    printf("", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("");
    scanf("%d", &k);
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<=n;i++){
        printf("%d",arr[i]);
    }

}