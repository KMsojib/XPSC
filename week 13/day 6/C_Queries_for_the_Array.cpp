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

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    vector<int>all;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            if(all.empty())
                continue;
            if(all.back()==0)
            {
                cout<<"NO\n";
                return;
            }
            for(int j=(int)all.size()-1;j>=0;j--)
            {
                if(all[j]==2)
                    all[j] = 1;
                else break;
            }
        }
        else if(s[i]=='0')
        {
            if(all.empty() || all.back()==1)
            {
                cout<<"NO\n";
                return;
            }
            all.back() = 0;
        }
        else if(s[i]=='+')
        {
            if(all.empty())
            {
                all.push_back(1);
            }
            else
            {
                if(all.back()==1)
                    all.push_back(2);
                else if(all.back()==2)
                    all.push_back(2);
                else
                    all.push_back(0);
            }
        }
        else
        {
            all.pop_back();
        }
    }
    cout<<"YES\n";
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        solve();
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
