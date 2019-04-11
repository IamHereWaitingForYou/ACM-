#include<iostream>
#include<algorithm> 
using namespace std;
int main()
{
	int a0,a1,b0,b1,getmon=0;
	int s,n,a[100],b[100];
	while(true)
	{	
		cin>>n;
		if(0==n)
		return 0;
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int j=0;j<n;j++)
		cin>>b[j];
		sort(a,a+n);
		sort(b,b+n);
		a0=0;
		b0=0;
		a1=n-1;
		b1=n-1;
		s=0;
		getmon=0;	
	while(s++<n)
	{
		if(a[a0]>b[b0])
		{
			getmon++;
			a0++;
			b0++;
		}
		else if (a[a0]<b[b0])
		{
			getmon--;
			a0++;
			b1--;
		}
		else 
		{
			if(a[a1]>b[b1])
			{
				getmon++;
				a1--;
				b1--;
			}
			else if(a[a0]<b[b1])
			{
				getmon--;
				a0++;
				b1--;
			}
		}
	}
		cout<<getmon*200<<endl;
	}
	return 0;	
} 
