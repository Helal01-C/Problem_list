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
        cin >> n;
        bool new_element = false;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 67)
            {
                new_element = true;
            }
        }
        cout << (new_element ? "YES" : "NO") << "\n";
    }
    return 0;
}