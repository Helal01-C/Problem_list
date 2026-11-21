#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int maximum = max({2 * A - 1, 2 * B - 1, A + B});

    cout << maximum << endl;
    return 0;
}