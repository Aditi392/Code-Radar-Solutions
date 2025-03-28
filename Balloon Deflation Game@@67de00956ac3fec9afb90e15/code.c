#include<stdio.h>
int fibo(int n)
{
	int fibs[n];
	fibs[0] = 0;
	fibs[1] = 1;
	int sum=0;
	for(int i=2;i<n;i++)
	{
    	fibs[i] = fibs[i-1]+fibs[i-2];
	}
	for(int i=0;i<n;i++)
	{
    	sum += fibs[i];
	}
	return sum;
}
int main()
{
	int numBalloons;
	scanf("%d",&numBalloons);
	if (numBalloons==0)
	{
    	printf("0");
	}
	else
	{
    	int result = fibo(numBalloons);
    	printf("%d",result);
	}
}
