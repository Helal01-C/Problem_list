#include <bits/stdc++.h>
using namespace std;

char pick(char a, char b)
{
    for (char c = 'a'; c <= 'z'; c++)
        if (c != a && c != b)
            return c;
    return 'a';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        string pass;
        bool inserted = false;

        for (int i = 0; i < n; i++)
        {
            pass += s[i];
            if (!inserted && i + 1 < n && s[i] == s[i + 1])
            {
                pass += pick(s[i], s[i + 1]);
                inserted = true;
            }
        }
        if (!inserted)
            pass += pick(s[n - 1], s[n - 1]);

        cout << pass << endl;
    }
    return 0;
}