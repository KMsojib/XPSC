#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
        int n;  cin>>n;
        if(n%2==0){
            cout<<n/2<<endl;
            for(int i=0;i<n/2;i++){
                cout<<"2 ";
            }
            cout<<endl;
        }
        else{
            n-=3;
            cout<<n/2+1<<endl;
            for(int i=0;i<n/2;i++){
                cout<<"2 ";
            }
            cout<<3<<endl;
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

/*
    case-1: if n is even then just print n/2 number of 2
    case-2: if n is odd then n=n-3; then print n/2 number of 2

        n=5 then 2 3 = 5
        n=6 then 2 2 2 = 6

*/