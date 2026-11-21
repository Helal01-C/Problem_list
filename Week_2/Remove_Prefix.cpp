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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<bool> present(n + 1, false);
        int total_removed = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (present[v[i]])
            {
                total_removed = i + 1;
                break;
            }
            present[v[i]] = true;
        }
        cout << total_removed << endl;
    }
    return 0;
}