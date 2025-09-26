#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    bool isLucky = false;

    while (N > 0)
    {
        int digit = N % 10;
        
        if (digit == 7)
        {
            isLucky = true;
            break;
        }
        N /= 10;
    }

    if (isLucky)
        cout << "Lucky";
    else
        cout << "Not Lucky";

    return 0;
}
