#include<iostream>
#include<algorithm> 
using namespace std;
const int  MAX=101;
int D[MAX][MAX];
int n;
int *maxSum;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=i;j++)
		cin>>D[i][j];
	maxSum=D[n];//maxSumָ���n��
	for(int i=n-1;i>=1;i--)
	for(int j=1;j<=i;j++)
	maxSum[j]=
		max(maxSum[j],maxSum[j+1])+D[i][j];	
 	cout<<maxSum[1]<<endl;
return 0;
 } 
