#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//template <typename T>
void FindMax(int shuzu[],const int size)
{
	sort(shuzu,shuzu+size);
	cout<<"最大值是："<<shuzu[size-1]<<endl; 
} 
int main()
{
		int a[5]={1,3,5,7,2};
		double b[5]={1.2,2.4,3.6,10.24,20.48};
		const int n=5;
		FindMax(a,n);
		return 0;
			
}
 
