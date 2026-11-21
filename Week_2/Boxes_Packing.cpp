#include<bits/stdc++.h>
using namespace std;

int main () 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    map<int , int> count;
    int visible = 0;

    for(int i=0;i < n;i++)
    {
        int x;
        cin >> x;
        count[x]++;
        visible = max(visible,count[x]);
    }

    cout << visible << endl;
    return 0;
}