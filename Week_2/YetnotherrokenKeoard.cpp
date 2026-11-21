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
        string s, ans;
        vector<int> small, big;
        vector<bool> del(s.size());

        cin >> s;
        del.resize(s.size(), false);

        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (c == 'b' || c == 'B')
            {
                del[i] = true;
                vector<int> &v = (c == 'b' ? small : big);

                if (!v.empty())
                {
                    del[v.back()] = true;
                    v.pop_back();
                }
            }
            else if (islower(c))
                small.push_back(i);
            else
                big.push_back(i);
        }

        for (int i = 0; i < s.size(); i++)
            if (!del[i])
                ans += s[i];

        cout << ans << endl;
    }
    return 0;
}