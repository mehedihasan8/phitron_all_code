#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> cnt0 (n + 1, 0), cnt1 (n + 1, 0), cnt2 (n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cnt0[i] = cnt0[i - 1] + (a[i] == 0);
        cnt1[i] = cnt1[i - 1] + (a[i] == 1);
        cnt2[i] = cnt2[i - 1] + (a[i] == 2);
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        bool zero = (cnt0[r] - cnt0[l - 1]) > 0;
        bool one = (cnt1[r] - cnt1[l - 1]) > 0;
        bool two = (cnt2[r] - cnt2[l - 1]) > 0;

        if (!zero)
            cout << 0 << "\n";
        else if (!one)
            cout << 1 << "\n";
        else if (!two)
            cout << 2 << "\n";
        else
            cout << 3 << "\n";
    }

    return 0;
}
