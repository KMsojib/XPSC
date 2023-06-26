#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,k;
    cin>>n>>k;
    map<int,vector<int>>mp;
    for(int i=1;i<=n;i++){
        int j;  cin>>j;
        mp[j].push_back(i);
    }
    for(int i=0;i<k;i++)
    {
        int a,b;    cin>>a>>b;
        if(!mp.count(a) || !mp.count(b))
        {
            cout<<"NO"<<endl;
            continue;
        }
        int idx=mp[a][0];
        if(upper_bound(mp[b].begin(),mp[b].end(),idx)==mp[b].end()){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}
/*
Explenation:
First Test Case:
n = 6
k = 3
Array: 3 7 1 5 1 4
Queries:
3 5
1 7
3 10

Iteration 1:
Input: 3 7 1 5 1 4
Map: {1: [3, 5], 3: [1], 4: [6], 5: [4], 7: [2]}

Iteration 2:
Input: 3 5
mp contains both a and b. idx = 1
upper_bound of mp[b] returns iterator to 4, which is less than idx. Therefore, prints YES.

Iteration 3:
Input: 1 7
mp contains both a and b. idx = 3
upper_bound of mp[b] returns iterator to end because there is no element greater than idx. Therefore, prints NO.

Iteration 4:
Input: 3 10
a not present in mp. Therefore, prints NO.

*/