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
        vector<int> a(n + 1);
        set<int> s;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }

        int l = 1, r = n;
        bool found = false;
        while (l <= r)
        {
            int mn = *s.begin(), mx = *s.rbegin();
            if (a[l] == mn || a[l] == mx)
            {
                s.erase(a[l]);
                l++;
            }
            else if (a[r] == mn || a[r] == mx)
            {
                s.erase(a[r]);
                r--;
            }
            else
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << l << " " << r << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}