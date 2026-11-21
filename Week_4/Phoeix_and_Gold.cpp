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
        int n, x;
        cin >> n >> x;
        vector<int> w(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            sum += w[i];
        }

        if (sum == x)
        {
            cout << "NO" << endl;
            continue;
        }

        int pre = 0;
        for (int i = 0; i < n; i++)
        {
            pre += w[i];
            if (pre == x)
            {
                swap(w[i], w[i + 1]);
                break;
            }
        }

        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << w[i] << " ";
        }
        cout << endl;
    }
    return 0;
}