#include<stdio.h>
#include<string.h>
int main()
{
	int t;int i,j;char temp;
	char x[200];
	while(1)
	{
		scanf("%d",&t);
		if(t==0)
		break;
	scanf("%s",x);
	int d=t-1;
	for(i=0;i<t;i++)
	{
		for(j=0;j<(strlen(x)/t);j++)
		{
		if(j%2==0)
		printf("%c",x[i+(j)*t]);
		else
		printf("%c",x[i+((j)*t+d)]);
		}
		d=d-2;
		}
		printf("\n");
	}
	return 0;
}
    
    
