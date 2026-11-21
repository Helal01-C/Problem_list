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

        long long cnt[11][11] = {};
        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int x = s[0] - 'a';
            int y = s[1] - 'a';
            for (int c = 0; c < 11; c++)
            {
                if (c != x)
                {
                    total = total + cnt[c][y];
                }
                if (c != y)
                {
                    total = total + cnt[x][c];
                }
            }
            cnt[x][y]++;
        }
        cout << total << endl;
    }
    return 0;
}