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
        int dp[7] = {};
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int nd[7];
            for (int v = 1; v <= 6; v++)
            {
                int best = i ? INT_MAX : 0;
                if (i)
                    for (int w = 1; w <= 6; w++)
                        if (w != v && w + v != 7)
                            best = min(best, dp[w]);
                nd[v] = best + (x != v);
            }
            copy(nd + 1, nd + 7, dp + 1);
        }
        cout << *min_element(dp + 1, dp + 7) << "\n";
    }
    return 0;
}