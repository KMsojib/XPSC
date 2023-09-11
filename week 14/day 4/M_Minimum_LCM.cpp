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
        int a=1;
        for(int i=2;i*i<=n;i++){
            if(n%i == 0){
                a=n/i; //also divisor of n;
                break;
            }
        }
        cout<<a<<" "<<n-a<<endl;
    }

    return 0;
}
