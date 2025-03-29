#include<stdio.h>
#include<stdbool.h>
int main()
{   int n;
    int arr[]={};
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-1;j++){
        if(arr[i]==arr[j]){
            printf("%d",arr[i]);
            break;
        }
    }
}
}