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
        while(a[1]!=a[2]&&a[2]!=a[3]){
	for(int i=0;i<3&&i!=b;i++)
	{
			if(a[b]-a[i]<2)
				{
						//(6-max-i)ÁíÍâÒ»¸öÊý	
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
						else if(a[b]-a[6-b-i]==2)
						{
							a[i]+=2;
							a[b]++;
							a[6-b-i]+=2;
							count+=3;
						}
				
			}
			else if(a[b]-a[i]>=2)
			{
				a[i]+=2;
				count++;
			}
	} 
}
cout<<count<<endl;
	return 0;
} 
