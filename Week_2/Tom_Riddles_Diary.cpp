#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<string> influence;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (influence.count(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            influence.insert(s);
        }
    }
    return 0;
}