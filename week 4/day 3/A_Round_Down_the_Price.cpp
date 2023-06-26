/*
#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;  cin>>t;
    while (t--)
    {
        /* code */
        /*
        long long n;    cin>>n;
        long long x=1;//10^0=1
        while(x*10<=n)
        {
            x*=10;
        }
        cout<<n-x<<endl;
    }
    
    return 0;
}*/
/* 
    power of 10
    1 10 100 1000 10000 100000 1000000 10000000 100000000

    178 round number<178
    178<1? no 
    178<10? no
    178<100? no
    178<1000? Yes
    break;
    x=100 
    ans=n-x; 178-100=78

*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while (t--)
    {
        /* code */
        int m; cin >> m;
        string t = to_string(m);
        string s = "1";
        for (int i = 1; i < t.size(); i++) {
            s += '0';
        }
        int k = stoi(s);
        cout << m - k << '\n';
    }
    
    return 0;
}