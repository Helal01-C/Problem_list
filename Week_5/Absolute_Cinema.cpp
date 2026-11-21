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
        cin >> n;
        vector<long long> f(n + 2), a(n + 2, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> f[i];
        }

        for (int x = 2; x <= n - 1; x++)
        {
            a[x] = (f[x + 1] - 2 * f[x] + f[x - 1]) / 2;
        }

        long long S = (f[1] + f[n]) / (n - 1);
        a[1] = ((f[2] - f[1]) + S) / 2;
        a[n] = (S - (f[n] - f[n - 1])) / 2;

        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " \n"[i == n];
        }
    }
    return 0;
}