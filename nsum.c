#include<stdio.h>
int main()
{
	long int t,a,b,n,i,c;
	scanf("%ld",&t);
	while(t--)
	{
		c=0;
		scanf("%ld %ld %ld",&a,&b,&n);
		for(i=1;;i++)
		{
		if(i%a==0||i%b==0)
		c++;
		if(c==n)
		break;
		}
		printf("%ld\n",i);
	}
	return 0;
}