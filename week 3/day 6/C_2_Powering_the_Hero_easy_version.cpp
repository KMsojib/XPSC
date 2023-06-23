#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;  cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    priority_queue<long long>pq;
    long long ans=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(pq.empty()) continue;
            else{
                ans+=pq.top();
                pq.pop();
            }
        }
        else{
            pq.push(a[i]);
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test;   cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}