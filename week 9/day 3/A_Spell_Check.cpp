#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        sort(s.begin(),s.end());
        string s1="Timur";
        sort(s1.begin(),s1.end());
        if(s1==s){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    return 0;
}