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
        string s;
        cin >> n >> s;

        int k = count(s.begin(), s.end(), '1');
        if (s[0] == '0' || s[n - 1] == '0' || k % 2)
        {
            cout << "NO" << endl;
            continue;
        }

        string a = s, b = s;
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                a[i] = b[i] = (one++ < k / 2) ? '(' : ')';
            }
            else
            {
                a[i] = (zero++ % 2 == 0) ? '(' : ')';
                b[i] = (a[i] == '(') ? ')' : '(';
            }
        }
        cout << "YES" << endl
             << a << endl
             << b << endl;
    }
    return 0;
}