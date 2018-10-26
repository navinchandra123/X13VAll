
#include<stdio.h>

int main()
{
	long long int a,b,i=1;
	scanf("%lld",&b);
	while(i<=b && b<5001)
	{
		scanf("%lld",&a);
		if(a%2!=0)
		printf("Case %d: %lld",i,a);
		else
		{
			if(a==0)
			printf("Case %d: %lld",i,a);
			else{
			while(a%2==0)
			a=a>>1;
		printf("Case %d: %lld",i,a);
	}
	}
	printf("\n");i++;
}
}
