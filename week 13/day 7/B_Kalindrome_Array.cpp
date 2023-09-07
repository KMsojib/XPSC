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

bool is_palindrom(vector<int>&v){
    int i=0,j=v.size()-1;
    int ans=1;
    while(i<j)
    {
        if(v[i]!=v[j])
        {
            ans=0;
            break;
        }
        i++;
        j--;
    }
    return ans;
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>a(n+2);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool f=true;
        int l=0,hi=n-1;
        int c=0,d=0;
        while (l<hi)
        {
            if(a[l]!=a[hi]){
                f=false;
                c=a[l];
                d=a[hi];
                break;
            }
            l++;
            hi--;
        }
        if(f==true){
            cout<<"YES\n";
            continue;
        }
        vector<int>v1,v2;
        for(int i=0;i<n;i++){
            if(a[i]==c)continue;
            v1.push_back(a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]==d)continue;
            v2.push_back(a[i]);
        }
        if(is_palindrom(v1) or is_palindrom(v2)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
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
