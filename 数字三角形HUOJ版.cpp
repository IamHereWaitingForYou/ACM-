#include<iostream>
#include<algorithm>
using namespace std;
const int MAX =101;
int maxSum[MAX][MAX],S[MAX][MAX];
int n,N;
int main()
{
int i,j;
//	cin>>N;
//	while(N--)
//	{
	cin>>n;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		cin>>S[i][j];
	}//ÊäÈëÊı¾İ
	for(int j=1;j<=n;j++)
	maxSum[n][j]=S[n][j];
	for(int i=n-1;i>=1;i--)
	for(int j=1;j<=i;j++) 
	maxSum[i][j]=
		max(maxSum[i+1][j],maxSum[i+1][j+1])+S[i][j];
	cout<<maxSum[1][1]<<endl;
//	}
	return 0;
}
