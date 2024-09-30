#include<bits/stdc++.h>
using namespace std;

const int N=10000;
vector<int>g[N];
bool visit[N]={false};

void dfs(int a)
{
   visit[a]=true;
   cout<<a<<" ";
   for(auto it: g[a])
   {
    if(!visit[it])
    {
        dfs(it);
    }
   }
}

int main()
{
    int n,e,x,y;
    cin>>n>>e;

    for(int i=0; i<e; i++)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int src;
    cin>>src;
    dfs(src);
}