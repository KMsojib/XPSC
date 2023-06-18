//problem link:https://codeforces.com/contest/1703/problem/D

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;   cin>>test;
    while(test--)
    {
        int n;  cin>>n;
        vector<string>s(n);
        map<string,bool>mp;
        for(int i=0;i<n;i++){
            cin>>s[i];
            mp[s[i]]=true;
        }
        string ans="";
        
        for(int i=0;i<n;i++){
            bool flag=false;
            for(int j=1;j<=s[i].size();j++){
                string s1=s[i].substr(0,j);
                string s2=s[i].substr(j,s[i].size()-1);

                if(mp[s1] && mp[s2]){
                    flag=true;
                    break;
                }
            }
            if(flag) ans+="1";
            else ans+="0";
        }
        cout<<ans<<endl;
    }

    return 0;
}