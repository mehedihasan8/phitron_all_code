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
        // 1 ber kore ante hobe
        int par = q.front();
        q.pop();

        // 2 kaj korte hobe...
        // eikhane kono kaj nei...

        // 3 children ke push korte hobe

        for (int chil : adj_list[par])
            if (vis[chil] == false)
            {
                q.push(chil);
                vis[chil] = true;
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
    int src, dst;
    cin >> src >> dst;
    bfs(src);

    if(vis[dst])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}