#include<stdio.h>
#define LL long long int
int main()
{
	LL a,b,s;
	while(scanf("%lld%lld",&a,&b)!=EOF)
	{
		if(b>a)
		{
			s=0;
			while(a<=b)
			{
				s+=a;
				a++;
			}
			printf("%lld\n",s);
		}
		else
		{
			s=0;
			while(b<=a)
			{
				s+=b;
				b++;
			}
			printf("%lld\n",s);
		}
	}
	return 0;
}