#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];

bool vis[1005];
int level[1005];
int parent[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);

    vis[src] = true;
    level[src] = 0;

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
                level[chil] = level[par] + 1;
                parent[chil] = par;
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
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    int src, dst;
    cin >> src >> dst;
    bfs(src);

    int node = dst;

    vector<int> path;


    while(node != -1){
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());

    for(int x: path)
        cout << x << " ";

    return 0;
}