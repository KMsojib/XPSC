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
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        if(b.size()<a.size()){
            cout<<"NO\n";
            continue;
        }
        stack<char>st;
        for(int i=a.size()-1;i>=0;i--){
            st.push(a[i]);
        }

        for(int i=0;i<b.size();i++){
            if(!st.empty() && b[i]==st.top()){
                st.pop();
            }
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
