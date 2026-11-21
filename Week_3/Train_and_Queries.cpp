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
        int n, k;
        cin >> n >> k;

        map<int, int> start, ennd;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            if (!start.count(p))
            {
                start[p] = i;
            }
            ennd[p] = i;
        }
        while (k--)
        {
            int a, b;
            cin >> a >> b;
            auto fa = start.find(a);
            auto lb = ennd.find(b);
            if (fa != start.end() && lb != ennd.end() && fa->second < lb->second)
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