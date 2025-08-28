#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];

bool vis[105];
int parent[105];

bool cycle;

void bfs(int src)
{

    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        // cout << par << endl;

        for (int x : adj_list[par])
        {
            if (vis[x] && parent[x] != x)
                cycle = true;

            if (!vis[x])
            {
                q.push(x);
                vis[x] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));

    memset(parent, -1, sizeof(parent));

    cycle = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            bfs(i);
    }

    if (cycle)
        cout << "Cycle Detected" << endl;
    else
        cout << "Cycle Not Detect" << endl;

    return 0;
}