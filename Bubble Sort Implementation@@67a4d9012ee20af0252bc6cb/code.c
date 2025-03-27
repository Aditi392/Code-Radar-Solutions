 #include<stdio.h>
 void bubblesort(int arr[],int n)
 {
     for(int i=0;i<n;i++){
         for(int j=0;j<n-1;j++)         {
             if(arr[j]>arr[j+1]){
                 int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
     } }
int main()
 {
    int arr[]={};
     int n=sizeof(arr)/sizeof(arr[0]);
     bubblesort(arr,n);    
      printf("sorted array:");

     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
     }
 }

