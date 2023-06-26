#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test;   cin>>test;
    while (test--)
    {
        /* code */
        string a;   cin>>a;
        vector<long long>index[26];
        vector<long long> ans;
        long long m=0,cost=0;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            index[a[i]-'a'].push_back(i+1);
        }

        cost=abs(a[0]-a[n-1]);
        
        if(a[0]<a[n-1]){
            for(int i=a[0]-'a';i<=a[n-1]-'a';i++)
            {
                long long l=index[i].size();
                m+=l;
                for(int j=0;j<l;j++)
                {
                    ans.push_back(index[i][j]);
                }
            }
        }

        else{
            for(int i=a[0]-'a';i>=a[n-1]-'a';i--)
            {
                long long l=index[i].size();
                m+=l;
                for(int j=0;j<l;j++)
                {
                    ans.push_back(index[i][j]);
                }
            }
        }
        
        cout<<cost<<" "<<m<<endl;
        for(int i=0;i<m;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}