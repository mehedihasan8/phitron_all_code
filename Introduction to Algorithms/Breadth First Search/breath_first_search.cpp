#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];

bool vis[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        // 1 queue theke element ber kore ante hobe..

        int par = q.front();
        q.pop();

        // 2 oi node niye kaj korte hobe..

        cout << par << " ";

        // 3 children gulo push kore rakhte hobe..

        for (int children : adj_list[par])

            if (vis[children] == false)
            {
                q.push(children);
                vis[children] = true;
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

    bfs(0);
    return 0;
}