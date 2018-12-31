#include<stdio.h>
int main()
{
	long long int f[101],s[101];
	f[0]=1;
	s[0]=1;
	for(int i=1;i<101;i++)
		{
		f[i]=f[i-1]*2;
		s[i]=s[i-1]+f[i];
		}
	long long int L,R,k,pL=0,pR=0;
	scanf("%lld %lld",&L,&R);
	k=R;
	while(L>>=1)
	pL++;
	while(R>>=1)
	pR++;
		//printf("%lld",pR);
		if(pL==0)
		printf("%lld",1+s[pR]-s[pL]);
		else if(pL==1)
		printf("%lld",2+s[pR]-s[pL]);
		else
		{
		if(k%f[pR]==0 && (s[pR]-s[pL])==0)
		printf("%lld",f[pR]);
		else
		printf("%lld",s[pR]-s[pL]);
		}
	return 0;
}
