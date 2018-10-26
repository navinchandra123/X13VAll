#include<stdio.h>
#include<math.h>
long int GCD(long int a,long int b)
{
	if(a%b==0)
	return(b);
	else
	return(GCD(b,a%b));
}
int main()
{
long int x,y,z;
scanf("%ld",&x);
while(x--)
{
	scanf("%ld%ld",&y,&z);
	printf("%ld\n",abs(y-z)/GCD(abs(y),abs(z)));
}

return 0;
}

