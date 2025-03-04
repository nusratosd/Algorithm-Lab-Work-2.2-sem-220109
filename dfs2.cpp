#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
bool vis[N];
vector<int>adj[N];
void dfs(int node)
{
    vis[node]=1;
    cout<<node<<" ";
    vector<int>::iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++)
    {
        if(vis[*it]);
        else dfs(*it);
    }

}
int main()
{
    int n,m;
    cin>>n>>m;//number of nodes and edges
    for( int i=0;i<=n;i++)//initialize the visted array
    {
        vis[i]=false;
    }
    int x,y;

    for(int i=0;i<m;i++)//edges input
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }
    dfs(1);

return 0;
}
