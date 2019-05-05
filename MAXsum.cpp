#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int N,Np;
	cin>>N;
	Np=N;
	while(N--)
	{
	int sum=0;
	const int MAX=1000;
	int p[MAX][MAX];
	memset(p,0,sizeof(p));
	int n,k=0;
	cin>>n;
	int *pp=new int [n];
	for(int i=0;i<n;i++)
	cin>>*(pp+i);
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=i;j<n;j++) 
		{
			sum+=*(pp+j);
			p[i][j]=sum;
		} 
	}
	int *Max=max_element(&p[0][0],&p[MAX-1][MAX]);
	cout<<"Case "<<Np-N<<":"<<endl<<*Max<<" ";
	for(int i=0;i<=n;i++)
	{
	for(int j=i;j<=n;j++)
	{
	if(p[i][j]==*Max)
	{
	cout<<i+1<<" "<<j+1<<endl;
	k++;
	}
	if(k>0)
	break;
	}
	if(k>0)
	break;
	}
	cout<<endl;
	}
	return 0;
} 

