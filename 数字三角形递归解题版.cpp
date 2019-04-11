#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 101
int S[MAX][MAX],n,MS[MAX][MAX]; 
int main()
{
	int i,j,N;
	cin>>N;
	while(N--)
	{
	cin>>n;
	for(i=1;i<=n;i++)
	for(j=1;j<=i;j++)
		cin>>S[i][j]; 
	for(int i=1;i<=n;i++)
	MS[n][i]=S[n][i];
	for(int i=n-1;i>=1;i--)
	for(int j=1;j<=i;j++)
	MS[i][j]=
		max(MS[i+1][j],MS[i+1][j+1])+S[i][j];
	cout<<MS[1][1]<<endl;
	}
	return 0;
}
