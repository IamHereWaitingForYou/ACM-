#include<iostream>
using namespace std;
bool DFS(Node n.int n)
{
	if(osEnd(n,d))//������ȴﵽ����״̬���ͷ���true 
	{
		return true;
	}
	for(Node nextNode in n)//����n���ڽڵ�nextNode 
	{
		if(!visit[nextNode])
		{
			visit[nextNode]=true;//��һ�������У�nextNode���ٳ��� 
			if(DFS(nextNode,d+1))//����������н� 
			{//������ϵľ��������������Ĳ��� 
				return true;//�����¼�����ȵ� 
			}
			visit[nextNode]=false;
		}
	}
	return false;//�������ó�false����Ϊ���п��ܳ�������һ�������ı��·���� 
}//���������޽� 
int main()
{
	
}
