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
        vector<int> a(n + 1), pos(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pos[a[i]] = i;
        }
        bool ok = true;
        for (int v = n; v >= 1 && ok; v--)
        {
            int p = pos[v];
            while (p > v)
            {
                if (p % 2 != 0)
                {
                    ok = false;
                    break;
                }
                int q = p / 2;
                swap(a[p], a[q]);
                pos[a[p]] = p;
                pos[a[q]] = q;
                p = q;
            }
            if (p != v)
                ok = false;
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
}