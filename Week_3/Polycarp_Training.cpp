#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp.insert(x);
    }

    int ans = 0, problem = 1;
    while (!mp.empty())
    {

        auto LB = mp.lower_bound(problem);
        if (LB != mp.end())
        {
            ans++;
            mp.erase(LB);
        }
        else
        {
            break;
        }
        problem++;
    }
    cout << ans << endl;
    return 0;
}