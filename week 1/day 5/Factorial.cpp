#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--)
    {
        int a;  cin>>a;
        long long fact=1;
        for(int i=2;i<=a;i++){
            fact*=i;
        }
        cout<<fact<<endl;
    }
    return 0;
}