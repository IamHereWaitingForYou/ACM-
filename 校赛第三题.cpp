#include<iostream>
#include<vector>
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
	long long b;
	vector<long long>a;
	for(int i=0;i<n;i++)
	{
		cin>>b;
		a.push_back(b);
	}
	sort(a.begin(),a.end());
	int q,m;
	cin>>q;
	while(q--)
	{
		cin>>m;
		long long count=0;
		vector<long long>::iterator it;
		for(it=a.begin();it<a.end();it++)
		{
			count++;
			if(m==*it)
			cout<<count<<endl;
		}
	}
}
return 0;
}
