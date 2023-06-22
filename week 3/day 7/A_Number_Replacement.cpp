#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){cin>>a[i]; }

        string s;cin>>s;

        map<int,set<char>>k;

        for(int i=0;i<n;i++)
        {
            k[a[i]].insert(s[i]);
        }
        bool flag=true;
        for(auto it: k){
            if(it.second.size()>1){
                flag=false;
                break;

            }
        }
        if(flag==true){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    return 0;
}