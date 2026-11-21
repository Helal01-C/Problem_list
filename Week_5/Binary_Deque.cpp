#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        int l = 0, sum = 0, maxlen = 0;
        for (int r = 0; r < n; r++)
        {
            sum += a[r];
            while (sum > s)
            {
                sum -= a[l];
                l++;
            }
            if (sum == s)
            {
                maxlen = max(maxlen, r - l + 1);
            }
        }
        cout << (maxlen == 0 ? -1 : n - maxlen) << endl;
    }
    return 0;
}