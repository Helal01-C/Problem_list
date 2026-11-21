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
        vector<int> a(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        int value_sign = set<int>(a.begin(), a.end()).size();
        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            if ((int)s.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }
            set<pair<int, char>> p;
            for (int i = 0; i < n; i++)
            {
                p.insert({a[i], s[i]});
            }
            int character_sign = set<char>(s.begin(), s.end()).size();
            if ((int)p.size() == value_sign && value_sign == character_sign)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}