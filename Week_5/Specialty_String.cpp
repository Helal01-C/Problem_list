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
        string s;
        cin >> n >> s;
        string st = "";
        for (int i = 0; i < n; i++)
        {
            if (st.size() > 0 && st[st.size() - 1] == s[i])
            {
                st.pop_back();
            }
            else
            {
                st.push_back(s[i]);
            }
        }
        if (st.size() == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}