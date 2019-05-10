#include<iostream>
#include<cstring>
using namespace std;
void chodie(int Pans[int i][int j] )
{
	if(Pans[i][j]==0)
	{
		Pan[i][j]=1;
	}
	else if(Pans[i][j]==1)
	{
		Pans[i][j]=0;
	}
}
int main()
{
const int MAX=30002;
int Pan[MAX][MAX];
memset(Pan,0,sizeof(Pan));
int n,m;
cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			chodie(Pan,i,j);
			if(i==j==0)
			{
				Pan[i+1][j];
			}
		}
	}
return 0;	
} 
//	if(Pan[i][j]==0)
//			{
//				Pan[i][j]=1; 
//			}
//			else if(Pan[i][j]==1)
//			{
//				Pan[i][j]=0;
//			}
//	if(j==0||j==m-1)
//			{
//				if(i==0||i==n-1)
//				{
//					
//				}
//				else if(i>0&&i<n-1)
//				{
//					
//				}
//			}
//			else if()
