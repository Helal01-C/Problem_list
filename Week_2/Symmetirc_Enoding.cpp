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
        string b;
        cin >> b;
        string r = b;
        sort(r.begin(), r.end());
        r.erase(unique(r.begin(), r.end()), r.end());

        int k = r.size();
        int pos[26];
        for (int i = 0; i < k; i++)
        {
            pos[r[i] - 'a'] = i;
        }
        string s = b;
        for (int i = 0; i < n; i++)
        {
            s[i] = r[k - 1 - pos[b[i] - 'a']];
        }
        cout << s << endl;
    }
    return 0;
}