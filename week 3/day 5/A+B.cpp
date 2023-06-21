#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans = (s[0]-'0')+(s[2]-'0');
        cout<<ans<<endl;
    }
    return 0;
}