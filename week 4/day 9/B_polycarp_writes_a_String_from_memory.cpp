#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
 
        int ans=0;
        set<char>a;
        for(int i=0;i<s.size();i++)
        {
            a.insert(s[i]);
            if(a.size()>3)
            {
                ans++;
                a.clear();
                a.insert(s[i]);
            }
        }
        if(!a.empty())ans++;
        cout<<ans<<endl;
    }
 
    return 0;
}