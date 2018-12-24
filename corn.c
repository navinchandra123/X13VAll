#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void flush(char st[],int n)
{
	for(int fi=0;fi<n;fi++)
	st[fi]='\0';
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i=0,j=0,k=0,cb=0,l=0;
		char a[100],b[100],c[100],s[100];
		double r,s1,h;
		int len=strlen(s);
		scanf("%s",s);
		flush(a,100);
		flush(b,100);
		flush(c,100);
		while(s[i]!='e')
		{
			a[i]=s[i];
			i++;
		}
		//printf("%d\n",i);
		i++;
		flush(b,5);
		while(s[i]!='e')
		{
			b[j]=s[i];
			j++;i++;
		}
		//printf("%d:%d\n",i,j);
		i++;
		while(s[i]!='\0')
		{
			c[l]=s[i];
			l++;i++;
		}
		//printf("%d:%d\n",i,l);
		r=atof(a);
		s1=atof(b);
		h=atof(c);
	//	printf("%lf:%lf:%lf\n",r,s1,h);
		printf("%0.0lf\n",ceil(3.1415*r*s1*sqrt(r*r+h*h)));
	}
}