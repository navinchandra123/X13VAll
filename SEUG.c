//seug
#include<stdio.h>
void quicksort(int S[],int li,int hi)
{
	int l=li;
	int h=hi;
	int pivot=S[(li+hi)/2];
	while(l<=h)
	{
	while(S[l]<pivot)
	l++;
	while(S[h]>pivot)
	h--;
	if(l<=h)
	{
		
		int temp=S[l];
		S[l]=S[h];
		S[h]=temp;
		h--;l++;
		
	}
	}
	if(li<h)
	quicksort(S,li,h);
	if(l<hi)
	quicksort(S,l,hi);
	}
int main()
{
	int t,a,b,ct,c,w,i,n,arr[1004];
	long int s;
	scanf("%d",&t);
	while(t--)
	{
		s=0;ct=0;
		scanf("%d%d%d%d",&a,&b,&c,&w);
		scanf("%d",&n);
		i=0;
		while(i<n)
		scanf("%d",&arr[i++]);
		quicksort(arr,0,n-1);
		i=0;
		/*while(i<n)
		printf("%d-",arr[i++]);*/
		while(s<=c-w)
		{
			--n;
		s+=arr[n];ct++;
		}
		printf("%d\n",ct);
		ct=0;
	}
}