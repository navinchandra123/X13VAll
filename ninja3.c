#include<stdio.h>
long long int GCD(long long int a,long long int b)
{
	if(a%b==0)
	return(b);
	else
	return(GCD(b,a%b));
}
int main()
{
	
	long long int x,y,z;
	int t;
	scanf("%d",&t);
	while(t--)
	{
scanf("%lld%lld%lld",&x,&y,&z);
long long int g=GCD(y,z);
while(g--)
printf("%lld",x);
printf("\n");
}
return 0;
}

    
