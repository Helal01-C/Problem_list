#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> d(n);
    for (auto &v : d)
    {
        cin >> v;
    }
    int l = 0;
    int r = n - 1;
    long long s1 = 0, s3 = 0, total = 0;
    while (l <= r)
    {
        if (s1 <= s3)
        {
            s1 = s1 + d[l++];
        }
        else
        {
            s3 = s3 + d[r--];
        }
        if (s1 == s3)
        {
            total = max(total, s1);
        }
    }
    cout << total << endl;
    return 0;
}