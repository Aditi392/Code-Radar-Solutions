#include<stdio.h>
int main()
{
int n;
printf("");
scanf("%d",&n);
int nsp=n/2;
int nst=1;
middleline=n/2+1;
for(i=1;i<=n;i++){
    for(j=1;j<=nsp;j++){
        printf("");
    }
    for(k=1;k<=nst;k++){
        printf("*");
    }
    if(i<middleline)
    {nsp--;
    nst+=2;
    }
    else{
        nsp++;
        nst-=2;
    }
    printf("\n");
}
}