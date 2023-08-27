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
        string s;   cin>>s;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mini,ans=0;
        for(int i=n-1;i>=0;){
            if(s[i]=='1'){
                mini=a[i];
                while (i>=0){
                    if(s[i]=='1'){
                        ans+=a[i];
                        i--;
                        mini=min(mini,a[i]);
                    }
                    else{
                        ans+=a[i];
                        mini=min(mini,a[i]);
                        ans=ans-mini;
                        i--;
                        break;
                    }
                }
            }
            else{
                i--;
            }
        }
        cout<<ans<<endl;
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
