#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int a[26] = {0};

        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }

        int odd = 0;

        for (int i = 0; i < 26; i++)
        {
            if (a[i] % 2 == 1)
                odd++;
        }

        if (odd > k + 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}