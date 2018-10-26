#include<stdio.h>
long int GCD(long int ,long int);
int main()
{
	long int x,y,z;
scanf("%ld\n%ld\n%ld",&x,&y,&z);
printf("%ld",GCD(GCD(x,y),z));
return 0;
}
long int GCD(long int a,long int b)
{
	if(a%b==0)
	return(b);
	else
	return(GCD(b,a%b));
}