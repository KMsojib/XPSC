#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;   cin>>test;
    while(test--)
    {
        long long n;    cin>>n;
        long long sum=0;
        while(n)
        {
            sum+=n;
            n/=2;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}