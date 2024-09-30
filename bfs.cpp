#include <bits/stdc++.h>
using namespace std;

const int N = 10000;
bool visit[N] = {false};
vector<int> g[N];
void bfs(int a)
{
    queue<int> q;
    q.push(a);
    visit[a] = true;
    while (!q.empty())
    {
        int k = q.front();
        q.pop();
        cout << k << " ";
        for (auto it : g[k])
        {
            if (!visit[it])
            {
                q.push(it);
                visit[it] = true;
            }
        }
    }
}
int main()
{
    int n, e, x, y, src;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    cin >> src;
    bfs(src);
}
