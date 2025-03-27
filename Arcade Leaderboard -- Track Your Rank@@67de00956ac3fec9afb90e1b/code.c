#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int ranked[200000];
    fot(int i=0;i<n;i++)
    scanf("%d",&ranked[i]);
    scanf("%d",&m);
    int player[200000];
    for(int i=0;i<m;i++)
    scanf("%d",&player[i]);
    int result[200000];
    trackplayerRanks(ranked, n,player,m,result);
    for(int i=0;i<m;i++)
    printf("%d\n",result[i]);
}