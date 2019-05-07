#include<iostream>
#include<cmath>
#include<algorithm> 
#include<cstring>
using namespace std;
int main()
{
		long long count=0;
		long long a[4];
while(cin>>a[1]>>a[2]>>a[3])
{
	count=0;
		long long *Max=max_element(a+1,a+4);
		int b=Max-a;
		while(true)
		{ 
		for(int i=1;i<4;i++)
		{
			if(i==b)
			continue;
				if(a[b]-a[i]<2&&a[b]-a[6-b-i]<2)
				{
					if(a[b]-a[i]==1)
					{
						if(a[b]-a[6-b-i]==0)
						{
							a[i]+=2;
							a[b]++;
							a[6-b-i]++;
							count+=2;
						}
						else if(a[b]-a[6-b-i]==1)
						{
							a[6-b-i]++;
							a[i]++;
							count++;
						}
					}
				}
				else if(a[b]-a[i]>=2)
				{
					a[i]+=2;
					count++;
				}
		}
		if(a[1]-a[2]==0&&a[2]-a[3]==0)
		break;
	}
		cout<<count<<endl;
}
		return 0;
} 
