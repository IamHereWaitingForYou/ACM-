#include<iostream>
using namespace std;
const int MAX=101;
int S[MAX][MAX];
int n;
int maxSum(int i,int j)
{
	if(n==i)
	{
		return S[i][j];
	}
	else 
	{
		int x=maxSum(i+1,i);
		int y=maxSum(i+1,i+1);
		return max(x,y)+S[i][j];
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=i;j++)
	{
		cin>>S[i][j];
	}
	cout<<maxSum(1,1)<<endl;
	return 0;
}
