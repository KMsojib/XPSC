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

int reverse_it(long long x){
    long long neW(0);
    while (x){
        neW*=10;
        neW+=x%10;
        x/=10;
    }
    return neW;
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        long long n;    cin>>n;
        long long rev= reverse_it(n);
        int cn=0;
        while (rev!= n){
            n+=rev;
            rev=reverse_it(n);
            cn++;
        }
        cout<<cn<<" "<<n<<endl;

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
