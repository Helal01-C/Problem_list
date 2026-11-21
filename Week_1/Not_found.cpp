#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool found[26] = {};
    for (int i = 0; i < s.length(); i++)
    {
        found[s[i] - 'a'] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (found[i] == false)
        {
            cout << char('a' + i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}