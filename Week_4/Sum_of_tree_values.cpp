#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;
    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 2; i++)
    {

        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            long long s = a[i].first + a[l].first + a[r].first;
            if (s == x)
            {
                cout << a[l].second << " " << a[r].second << " " << a[i].second << " ";
                return 0;
            }
            if (s < x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}