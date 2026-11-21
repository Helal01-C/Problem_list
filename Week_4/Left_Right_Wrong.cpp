#include<bits/stdc++.h>
using namespace std;

int main () 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long long> pre(n+1, 0);
        for(int i=0;i<n;i++)
        {
            long long x;
            cin >> x;
            pre[i+1] = pre[i] + x;
        }
        string s;
        cin >> s;
        long long final_sore = 0;
        int l = 0;
        int r = n - 1;
        while(true)
        {
            while(l<n && s[l] != 'L')
            {
                l++;
            }
            while(r >= 0 && s[r] != 'R')
            {
                r--;
            }
            if(l >= r)
            {
                break;
            }
            final_sore += pre[r+1] - pre[l];
            l++;
            r--;
        }
        cout << final_sore << endl;
    }
    return 0;
}