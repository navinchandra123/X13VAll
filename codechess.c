#include<stdio.h>
int main()
{
	long int t,n;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld",&n);
		if(n%2==0)
		printf("0\n");
		else
		printf("1\n");
	}
	return 0;
}
