/*
    Creator:
        MD.Kawsar Mahmud
        kawsarmahmud822@gmail.com

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());

        bool flag=true;
        for(int i=1;i<n;i++){
            flag&=(a[i]-a[i-1]<=1);
        }
        if(flag){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    return 0;
}