#include<stdio.h>
#include<math.h>
int main()
{
    long int t,i,a,k,s;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld",&s);
		/*for(i=1;i<=(1+sqrt(1+8*s))/2;i++)
		if(s==i*(i+1)/2)
		{
			k=0;
			a=i;
		}*/
			long int h=(-1+sqrtl(1+8*s))/2;
if((h*(h+1))/2==s)
		//if(k==0)
		printf("%0.0ld\n",h);
		else
		printf("NAI\n");
	}
	return 0;
}
/*long int h=(-1+sqrtl(1+4*s))/2
if((h*(h+1))/2==s)*/