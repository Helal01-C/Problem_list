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
        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int w;
            cin >> w;
            cnt[w]++;
        }
        int best = 0;
        for (int s = 2; s <= 2 * n; s++)
        {
            int teams = 0;
            for (int i = 1; i <= n; i++)
            {
                int j = s - i;
                if (j < i || j > n)
                {
                    continue;
                }
                if (i == j)
                {
                    teams = teams + cnt[i] / 2;
                }
                else
                {
                    teams = teams + min(cnt[i], cnt[j]);
                }
            }
            best = max(best, teams);
        }
        cout << best << endl;
    }
    return 0;
}