#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> count;
    string s;

    while (n--)
    {
        cin >> s;
        if (count[s] == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s << count[s] << endl;
        }
        count[s]++;
    }
    return 0;
}