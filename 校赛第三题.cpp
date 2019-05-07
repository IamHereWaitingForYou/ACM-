#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long T;
	cin>>T;
	int n;
	while(T--)
	{
	cin>>n;
	long long *a=new long long [n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	int q,m;
	cin>>q;
	long long *g;
	while(q--)
	{
		cin>>m;
		g=find(a,a+n,m);
		cout<<g-a+1<<endl; 
	}
	delete []a;
	}
return 0;
}
//		vector<long long>::iterator it;
//		for(it=a.begin();it<a.end();it++)
//		{
//			count++;
//			if(m==*it)
//			cout<<count<<endl;
//		}
