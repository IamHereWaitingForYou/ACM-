#include<iostream>
#include<algorithm>
using namespace std;
const int MAX=101;
int S[MAX][MAX];
int n;
int maxSum[MAX][MAX]; 
int MaxSum(int i,int j)
{
	if(maxSum[i][j]!=-1)
	return maxSum[i][j];
	if(n==i)
	{
		maxSum[i][j]=S[i][j];//可以直接return S[i][j] 
	}
	else 
	{
		int x=max(i+1,j);
		int y=max(i+1,j+1);
		maxSum[i][j]=max(x,y)+S[i][j];
	}
	return maxSum[i][j];
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
		{
		cin>>S[i][j];
		maxSum[i][j]=-1;
		}
	cout<<MaxSum(1,1)<<endl;
	return 0;
}
