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
        int n;  cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool f=true;
        sort(a,a+n);
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                f=false;
                break;
            }
        }
        if(f){
            cout<<"YES\n";
        }
        else{
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
