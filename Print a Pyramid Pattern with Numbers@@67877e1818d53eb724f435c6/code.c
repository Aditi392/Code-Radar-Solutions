#include<stdio.h>
int main()
{
int n;
printf("");
scanf("%d",&n);
int nsp=n/2;
int nst=1;
int middleline=n/2+1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=nsp;j++){
        printf(" ");
    }
    for(int k=1;k<=nst;k++){
        printf("%d ",k);
    }
    if(i<middleline)
    {nsp--;
    nst+=2;
    }
    else
    {
    nsp++;
    nst-=2;
    }
    printf("\n");
}
}