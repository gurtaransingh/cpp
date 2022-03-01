#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void addEdge(int u,int v,vector<int>* V)
{
	V[u].push_back(v);
}
void DFS(int s,vector<int>* adj,int n)
{
    int visited[n+1]={0};
    stack<int> stack; 
    stack.push(s); 
  	vector<int>::iterator i;
    while (!stack.empty()) 
    { 
        s = stack.top(); 
        stack.pop(); 
        if (!visited[s]) 
        { 
            cout << s << " "; 
            visited[s] = true; 
        } 
        for (i = adj[s].begin(); i != adj[s].end(); ++i) 
            if (!visited[*i]) 
                stack.push(*i); 
    }  
}
int main()
{
	int n,e,u,v;
	cout<<"Total vertices"<<endl;
	cin>>n;
	cout<<"Total Edges"<<endl;
	cin>>e;
	int copy=n;
	vector<int> V[n+1];
	for(int i=0;i<e;i++)
	{
		cout<<"Start"<<endl;
		cin>>u;
		cout<<"End"<<endl;
		cin>>v;
		addEdge(u,v,V);
	}
	cout<<"Graph Representation"<<endl;
	vector<int>::iterator it;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<"->";
		for(it=V[i].begin();it!=V[i].end();it++)
		{
			cout<<*it<<" ";
		}	
		cout<<endl;
	}
	cout<<"Depth First traversal of the Graph is ";
	DFS(1,V,n);
	return 0;
}