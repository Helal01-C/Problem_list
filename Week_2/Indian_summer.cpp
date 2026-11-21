#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<pair<string, string>> s;

    for (int i = 0; i < n; i++)
    {
        string tree, color;
        cin >> tree >> color;

        s.insert({tree, color});
    }
    cout << s.size() << endl;
    return 0;
}