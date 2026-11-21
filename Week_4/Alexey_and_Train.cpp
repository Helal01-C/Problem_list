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
        vector<long long> a(n), b(n), tm(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> tm[i];
        }

        long long cur = 0, prevB = 0, arr = 0;
        for (int i = 0; i < n; i++)
        {
            arr = cur + (a[i] - prevB) + tm[i];
            if (i == n - 1)
            {
                break;
            }
            long long stay = (b[i] - a[i] + 1) / 2; 
            cur = max(b[i], arr + stay);
            prevB = b[i];
        }
        cout << arr << endl;
    }
    return 0;
}