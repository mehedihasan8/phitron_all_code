#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        string st;

        for (char c : s)
        {
            if (!st.empty() && st.back() == c)
                st.pop_back();
            else
                st.push_back(c);
        }

        cout << st.size() << endl;
    }

    return 0;
}
