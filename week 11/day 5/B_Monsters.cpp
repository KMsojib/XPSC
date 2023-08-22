/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x

bool compare(pair<int,int>a, pair<int,int>b)
{
    if(a.first < b.first){
        return false;
    }
    else if(a.first > b.first){
        return true;
    }
    return a.second < b.second;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t;  cin>>t;
    while(t--){
        int n,k;    cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            a[i]%=k;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(a[i] == 0){
                ans.push_back(i+1);
            }
        }
 
        vector<pair<int,int>>l(n);
        for(int i=0;i<n;i++){
            l.push_back({a[i],i+1});
        }
 
        sort(l.begin(),l.end(),compare);
        for(auto i : l){
            if(i.first != 0){
                ans.push_back(i.second);
            }
        }
        for(auto f : ans){
            cout<<f<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}
/* check constraints
    * at first try a brute force way to solve
    * then optimization
 
    *  if its array:
        1. try greedy
        2. if it is a result of subproblems try dp
        3. if it is showing for  a range minimum or maximum
        3. 1 tttttffffff
     else
       3.2 ffffftttttt
        try binary search
*/
