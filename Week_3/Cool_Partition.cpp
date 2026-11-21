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

        set<int> seen_value, current_value;
        int segments = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            seen_value.insert(x);
            current_value.insert(x);
            if (current_value.size() == seen_value.size())
            {
                segments++;
                current_value.clear();
            }
        }
        cout << segments << endl;
    }
    return 0;
}