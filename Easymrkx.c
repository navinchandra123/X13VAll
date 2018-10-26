#include<stdio.h>
int max(int x,int y)
{
return((x+1)*y);
}
	int main()
	{
	int a,b,i=1;
	int m1,n;
	int t;
	int s=0;
	scanf("%d",&t);
	while(i<=t)
	{
		s=0;
	scanf("%d %d",&a,&b);
	m1=max(a,b);
	while(a--)
	{
	scanf("%d",&n);
	s+=n;
	}
	printf("Case %d: %d\n",i,m1-s);
	i++;
	}
}