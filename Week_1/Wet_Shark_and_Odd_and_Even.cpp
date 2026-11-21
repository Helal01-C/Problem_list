#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    int S_odd = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum = sum + x;
        if (x % 2 != 0)
        {
            S_odd = min(S_odd, x);
        }
    }
    if (sum % 2 != 0)
    {
        sum = sum - S_odd;
    }
    cout << sum << endl;
    return 0;
}