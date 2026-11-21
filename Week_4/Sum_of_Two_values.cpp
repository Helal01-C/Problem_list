#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    unordered_map<long long, int> seen;
    seen.reserve(n * 2);

    for (int i = 1; i <= n; i++)
    {
        long long v;
        cin >> v;
        auto it = seen.find(x - v);
        if (it != seen.end())
        {
            cout << it->second << " " << i << endl;
            return 0;
        }
        seen[v] = i;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}