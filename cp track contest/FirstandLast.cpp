#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    map<long long, pair<int, int>> mp;

    for (int i = 1; i <= n; i++)
    {

        long long val = arr[i];

        if (mp.find(val) == mp.end())
        {
            int f_idx = i, l_idx = i;
            mp[val] = {f_idx, l_idx};
        }
        else
        {
            int l_idx = i;
            mp[val].second = l_idx;
        }
    }

    for (auto it : mp)
    {
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }

    return 0;
}
