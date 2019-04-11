#include<iostream>
using namespace std;
bool DFS(Node n.int n)
{
	if(osEnd(n,d))//搜索深度达到结束状态，就返回true 
	{
		return true;
	}
	for(Node nextNode in n)//遍历n相邻节点nextNode 
	{
		if(!visit[nextNode])
		{
			visit[nextNode]=true;//下一步搜索中，nextNode不再出现 
			if(DFS(nextNode,d+1))//如果搜索出有解 
			{//其他配合的具体情况具体分析的操作 
				return true;//比如记录结果深度等 
			}
			visit[nextNode]=false;
		}
	}
	return false;//重新设置成false，因为他有可能出现在下一次搜索的别的路径中 
}//本次搜索无解 
int main()
{
	
}
