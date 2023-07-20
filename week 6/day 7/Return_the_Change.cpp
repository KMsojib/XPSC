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
        int n;  cin>>n;
        string s=to_string(n);
        if(s[s.size()-1]-'0'<5){
            cout<<100-(n-n%10)<<endl;
        }else{
            cout<<100-(n-n%10+10)<<endl;
        }
    }
    
    return 0;
}