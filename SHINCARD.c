#include<stdio.h>
void quicksort(long int s[],long int li,long int hi)
{
	long int l=li;
	long int h=hi;
	long int pivot=s[(li+hi)/2];
	while(l<=h)
	{
		while(s[l]<pivot)
		l++;
		while(s[h]>pivot)
		h--;
		if(l<=h)
		{
			long int temp=s[l];
			s[l]=s[h];
			s[h]=temp;
			h--;l++;
		}
	}
	if(li<h)
	quicksort(s,li,h);
   if(l<hi)
	quicksort(s,l,hi);
}
long long int totaltime(long int b[],long int x)
{
   if(x==1||x==2)
	 return b[x-1];
	else if(x==3)
	{
		long long int c=0;
		for(long int k=0;k<x;k++)
		c=c+b[k];
		return c;
	}
	else
	{
		long long int t=2*b[0]+b[x-1]+b[x-2];
		long long int t1=2*b[1]+b[0]+b[x-1];
		if(t<t1)
		return t+totaltime(b,x-2);
		else
		return t1+totaltime(b,x-2);
	}
}
/* This code is contributed by yash jaiswal*/
int main()
{
	long int n,i;
	long long int d;
	scanf("%ld",&n);
	long int a[n];
	for(i=0;i<n;i++)
	scanf("%ld ",&a[i]);
	quicksort(a,0,n-1);
	d=totaltime(a,n);
	printf("%lld",d);
	return 0;
}