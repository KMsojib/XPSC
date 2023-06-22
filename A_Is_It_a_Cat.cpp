#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int test;   cin>>test;
    while (test--)
    {
        /* code */
        int n;  cin>>n;
        string s;   cin>>s;

        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]+=32;
            }
        }
        s.erase(unique(s.begin(), s.end()), s.end()); 
        cout << (s == "meow" ? "YES" : "NO") << endl;
    }
    
    return 0;
}
