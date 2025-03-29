#include<stdio.h>
void reverse(int arr[])
{
    int i;
    int j;
    while(i<=j)
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j++;
}
int main()
{
    int arr={};
    reverse(arr);
    for(int i=0;i<=;i++){
        printf("%d\n",arr[i]);
    }
}