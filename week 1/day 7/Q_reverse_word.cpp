#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    string ans="";
    for(int i=s.size();i>=0;i--){
        ans+=s[i];
    }
    cout<<ans<<endl;

    return 0;
}