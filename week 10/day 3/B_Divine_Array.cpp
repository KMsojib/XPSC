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
        read(n);
        int a[n];
        for(int i=0;i<n;i++)    cin>>a[i];
        int v[n+1][n];
        for(int j=0;j<n;j++){
            v[0][j]=a[j];
        }
        for(int i=1;i<=n;i++){
            map<int,int>mp;
            for(int i=0;i<n;i++){
                mp[a[i]]++;
            }
            for(int j=0;j<n;j++){
                a[j]=mp[a[j]];
                v[i][j]=a[j];
            }
        }

        int q;  cin>>q;
        while (q--){
            int x,k;    cin>>x>>k;
            x--;//for 0 base indx
            if(k>n){
                cout<<v[n][x]<<endl;
            }else{
                cout<<v[k][x]<<endl;
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
