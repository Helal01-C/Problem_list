#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> text;
    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        text[s] = i;
    }

    vector<pair<int, string>> v;
    for (map<string, int>::iterator it = text.begin(); it != text.end(); ++it)
    {
        v.push_back(make_pair(it->second, it->first));
    }

    sort(v.rbegin(), v.rend());
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i].second << "\n";
    }
    return 0;
}