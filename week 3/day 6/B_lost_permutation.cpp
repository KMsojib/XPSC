#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--)
    {
        long long m,s;    cin>>m>>s;
        // vector<long long>a(m);
        int maxo=INT_MIN;
        unordered_map<long long, bool>mp;
        for(int i=0;i<m;i++){
            int alu;
            cin>>alu;
            maxo=max(maxo,alu);
            mp[alu]=true;
        }
        int p=1;
        while(s>0)
        {
            while(mp[p]==true)
            {
                p++;
            }
            s=s-p;
            maxo=max(maxo,p);
            mp[p]=true;
            p++;
        }
        if(s==0 && maxo==mp.size())
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}