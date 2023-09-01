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

void solve (){
        string s;
        cin>>s;
        stack<char>t;
        for(int i=0;i<(int)s.size();i++){
            if(t.size()==0){
                t.push(s[i]);
                continue;
            }
            if(s[i]=='B' && (t.top()=='A' || t.top()=='B'))
                    t.pop(); 
            else{
                t.push(s[i]);
            }
        }
        cout<<(int)t.size()<<"\n";
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
