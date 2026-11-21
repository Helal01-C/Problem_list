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
        vector<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2)
            {
                odd.push_back(a);
            }
            else
            {
                even.push_back(a);
            }
        }
        for (int v : odd)
        {
            cout << v << " ";
        }
        for (int v : even)
        {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}