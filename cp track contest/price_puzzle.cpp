#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
    }
    vector<bool> check(total + 1, false);
    check[0] = true;
    for (int x : v)
    {
        for (int i = total - x; i >= 0; i--)
        {
            if (check[i])
            {
                check[i + x] = true;
            }
        }
    }
    vector<int> vc(total + 1, 0);
    if (check[0])
        vc[0] = 0;
    else
        vc[0] = 1;
    for (int i = 1; i <= total; i++)
    {
        if (check[i])
        {
            vc[i] = vc[i - 1] + 1;
        }
        else
        {
            vc[i] = vc[i - 1];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l > total)
        {
            cout << 0 << endl;
            continue;
        }
        if (r > total)
            r = total;
        int ans;
        if (l > 0)
        {
            ans = vc[r] - vc[l - 1];
        }
        else
        {
            ans = vc[r];
        }
        cout << ans << endl;
    }
    return 0;
}