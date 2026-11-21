#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    vector<pair<string, string>> v;
    for (int i = 0; i < q; i++)
    {
        string old, newHandle;
        cin >> old >> newHandle;
        bool found = false;

        for (auto &p : v)
        {
            if (p.second == old)
            {
                p.second = newHandle;
                found = true;
                break;
            }
        }
        if (!found)
        {
            v.push_back({old, newHandle});
        }
    }
    cout << v.size() << endl;
    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}