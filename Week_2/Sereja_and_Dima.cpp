#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left_move = 0;
    int right_move = n - 1;
    int sereja = 0, dima = 0;
    int turn_move = 0;

    while (left_move <= right_move)
    {
        int card;
        if (a[left_move] > a[right_move])
        {
            card = a[left_move];
            left_move++;
        }
        else
        {
            card = a[right_move];
            right_move--;
        }
        if (turn_move == 0)
        {
            sereja += card;
        }
        else
        {
            dima += card;
        }
        turn_move = 1 - turn_move;
    }
    cout << sereja << " " << dima << '\n';
    return 0;
}