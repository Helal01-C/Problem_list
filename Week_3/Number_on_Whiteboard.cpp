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
        cout << 2 << endl;
        if (n == 2)
        {
            cout << 2 << " " << 1 << endl;
            continue;
        }
        cout << n - 2 << " " << n << endl;
        cout << n - 1 << " " << n - 1 << endl;

        int values = n - 1;
        for (int x = n - 3; x >= 1; x--)
        {
            cout << values << " " << x << endl;
            values = (values + x + 1) / 2;
        }
    }
    return 0;
}