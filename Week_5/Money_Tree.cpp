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
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n), h(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : h)
            cin >> x;

        int best = 0, l = 0;
        long long sum = 0;
        for (int r = 0; r < n; r++)
        {
            if (r > 0 && h[r - 1] % h[r] != 0)
            {
                l = r;
                sum = 0;
            }
            sum += a[r];
            while (sum > k)
            {
                sum -= a[l];
                l++;
            }
            best = max(best, r - l + 1);
        }
        cout << best << endl;
    }
    return 0;
}