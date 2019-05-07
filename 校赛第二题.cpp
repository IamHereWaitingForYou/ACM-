#include<iostream>
#include<cmath>
#include<algorithm> 
#include<cstring>
using namespace std;
int main()
{
	long long count=0;
	long long a[4];
	memset(a,0,sizeof(a));
	for(int i=1;i<4;i++)
		cin>>a[i];
	long long *Max=max_element(a+1,a+4);//MAX 
	cout<<*Max<<" "<<Max-a;
	int b=Max-a;//MAX position
	for(int i=0;i<3&&i!=b;i++)
	{
			if(a[b]-a[i]<=2)
			{
				if(a[b]-a[i]==2)
				{
					a[i]+=2;
					count++;
				}
				else if(a[b]-a[i]==1)
				{
						//(6-max-i)另外一个数	
						if(a[b]-a[6-b-i]==0)
						{
							a[i]+=2;
							a[b]++;
							a[6-b-i]+=2;
							count+=2;
						}
						else if(a[b]-a[6-b-i]==1)
						{
							a[6-b-i]++;
							a[i]++;
							count++;
						}
						else if(a[b]-a[6-b-i]==2)
						{
							a[i]+=2;
							a[b]++;
							a[6-b-i]+=2;
							count+=3;
						}
				}
			}
			else if(a[b]-a[i]>2)
			{
				a[i]+=2;
				count++;
			}
	} 
	return 0;
} 
