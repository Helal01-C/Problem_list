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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;

            if (i >= x && i < y)
            {
                a.push_back(v);
            }
            else
            {
                b.push_back(v);
            }
        }
        int sa = a.size();
        int sb = b.size();
        int mi = 0;
        for (int i = 1; i < sa; i++)
        {
            if (a[i] < a[mi])
            {
                mi = i;
            }
        }
        int k = sb;

        for (int i = 0; i < sb; i++)
        {
            if (b[i] > a[mi])
            {
                k = i;
                break;
            }
        }
        for (int i = 0; i < k; i++)
        {
            cout << b[i] << " ";
        }

        for (int i = 0; i < sa; i++)
        {
            cout << a[(mi + i) % sa] << " ";
        }

        for (int i = k; i < sb; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}