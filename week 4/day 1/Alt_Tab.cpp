#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;  cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    string ans="";
    map<string,bool>mp;
    for(int i=n-1;i>=0;i--)
    {
        string s=v[i];
        if(mp.find(s)!=mp.end()){
            continue;
        }
        else{
            ans+=s[s.size()-2];
            ans+=s[s.size()-1];
            mp[v[i]]=true;
        }
    }
    cout<<ans<<endl;
    return 0;
}