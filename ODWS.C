#include<stdio.h>
#include<string.h>
#define mod 1000000007
int main()
{
	char a[101],b[101];
	long long int r,i=1,j,t;
	scanf("%lld",&t);
	while(i<=t)
	{
		r=0;
		scanf("%s\n%s",a,b);
		for(j=0;j<strlen(a);j++)
		{
			r=26*r%mod+(b[j]-a[j]);
		}
		printf("Case %lld: %lld\n",i,(r-1)%mod);i++;
	}
}