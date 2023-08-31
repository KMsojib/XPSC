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
        int n,k;    cin>>n>>k;
        int temp1=n,temp2=k;
        vector<int>a(n);
        for(int i=1;i<=k;i++){
            cin>>a[i];
        }
        int j=0;
        sort(a.begin(),a.end());
        while (temp1>0)
        {
            temp1=temp1-(n-a[j]);
            j--;
        }
        cout<<k-j-1<<endl;
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
