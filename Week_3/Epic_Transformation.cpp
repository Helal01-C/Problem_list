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
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }

        priority_queue<int> pq;
        for (auto &p : cnt)
        {
            pq.push(p.second);
        }
        while (pq.size() >= 2)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if (--x > 0)
            {
                pq.push(x);
            }
            if (--y > 0)
            {
                pq.push(y);
            }
        }
        cout << (pq.empty() ? 0 : pq.top()) << endl;
    }
    return 0;
}