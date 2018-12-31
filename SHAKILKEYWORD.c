//opmodulo
#include<stdio.h>
void delimiter(char *s)
{
	for(int i=0;s[i]!='\0';i++)
	if(s[i]=='|' || s[i]=='$'|| s[i]=='*' ||
		 s[i]=='@' || s[i]=='.' || s[i]
		 =='&' || s[i]=='\\' || s[i]
		 =='"' || s[i]=='!' || 
		 s[i]=='^'|| s[i]==',' || 
		 s[i]=='?')
		 s[i]=' ';
}
int check(char *st)
{
	int lent=strlen(st);
	for(int m=0;m<lent;m++)
	if(st[m]=='#')
	return 1;
	return 0;
}
int main()
{
	struct sub
	{
	char b[105];
	}str[100005];
	char s1[105];
	int t,op=1;
	scanf("%d\n",&t);
	while(t--)
	{
		op=0;
		for(int h=0;h<206;h++)
	{
		for(int p=0;p<206;p++)
		{
			str[h].b[p]='\0';
		}
	}
	//printf("%d:",t);
	//scanf("%[^\n]%*c",s1);
	gets(s1);
	op=check(s1);
	//printf("%d",op);
	//puts(s1);
	int j,k=0,l=0,len=0,k1=1;
	len=strlen(s1);
	//printf("%s\n",s1);
	delimiter(s1);
	//printf("%s",s1);
	if(op>0)
	{
	for(j=0;j<len;j++)
	{
		k1=1;
		if(s1[j]!=' ')
		{
		str[k].b[l]=s1[j];
		//printf("%c:",s1[j]);
		l++;
		}
		else
		{
			//printf("1");
			k1=0;
			l=0;
		}
		if(k1==0)
		{
		k++;l=0;}
		//if(k==len)
		//str[--k].b[--l]='\0';
		//printf("%s:-",(str[k].b));
	}//printf("\n");
	//printf("%d",k);
	for(int j=0;j<k;j++)
	{
	if(check(str[j].b)>0)
	printf("%s\n",str[j].b);
	//else
	//printf("No Keywords.\n");
	}
	}
	else
	printf("No keywords.\n");
	
}
}
