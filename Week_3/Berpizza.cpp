#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q, cnt = 0, ptr = 1;
    cin >> q;
    vector<bool> served(q + 1, false);
    priority_queue<pair<int, int>> pq;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int m;
            cin >> m;
            cnt++;
            pq.push({m, -cnt});
        }
        else if (type == 2)
        {
            while (served[ptr])
                ptr++;
            cout << ptr << " ";
            served[ptr] = true;
        }
        else
        {
            while (served[-pq.top().second])
                pq.pop();
            int id = -pq.top().second;
            cout << id << " ";
            served[id] = true;
            pq.pop();
        }
    }
    return 0;
}