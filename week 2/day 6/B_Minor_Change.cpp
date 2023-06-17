//https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en



#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s,t;
    cin>>s;
    cin>>t;
    if(s==t){
        cout<<0<<endl;
        return 0;
    }
    int cn=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i]){
            cn++;
        }
    }
    cout<<cn<<endl;
    return 0;
}