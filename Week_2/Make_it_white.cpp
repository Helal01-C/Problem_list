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
        int first_colour = -1, last_colour = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (first_colour == -1)
                {
                    first_colour = i;
                }
                last_colour = i;
            }
        }
        cout << last_colour - first_colour + 1 << endl;
    }
    return 0;
}